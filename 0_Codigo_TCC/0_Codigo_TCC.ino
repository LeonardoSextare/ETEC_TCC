// Bibliotecas Globais
#include "SoftwareSerial.h"

// Variaveis Globais
String menu = "menu_Index";
int distancia, chegada = 0;

// Bibliotecas e Parametros do Sensor Ultrassonico
#include <NewPing.h>

#define trig_pin 22
#define echo_pin 23
#define max_dist 500
NewPing sonar(trig_pin, echo_pin, max_dist);

// Bibliotecas e Parametros do Modulo MP3
#include "DFRobotDFPlayerMini.h"

#define pinRx 50
#define pinTx 51
#define volumeMP3 25
#define DEBUG
SoftwareSerial playerMP3Serial(pinRx, pinTx);
DFRobotDFPlayerMini playerMP3;

// Bibliotecas e Parametros da Tela Touch
#include <TouchScreen.h>
#include <MCUFRIEND_kbv.h>
MCUFRIEND_kbv tft;

#define LCD_CS A3
#define LCD_CD A2
#define LCD_WR A1
#define LCD_RD A0
#define LCD_RESET A4

#define MINPRESSURE 10
#define MAXPRESSURE 1000

#define USE_MEGA_8BIT_SHIELD
#define WHITE 0xFFFF
#define YELLOW 0xFFE0
#define RED 0xF800
#define BLUE 0x001F
#define BLACK 0x0000
#define CINZA 0x7BEF
#define FUNDO 0x4229
#define BOTAO 0x18C3
#define BORDA 0xFFFF

#define YP A1
#define XM A2
#define YM 7
#define XP 6
#define TS_LEFT 944
#define TS_RT 147
#define TS_TOP 968
#define TS_BOT 147

// Bibliotecas e Parametros do Leitor da Tela Touch

#include <SPI.h>
#include <SdFat.h>

#define USE_SDFAT
SoftSpiDriver<12, 11, 13> softSpi;
SdFat SD;
#define SD_CS SdSpiConfig(10, DEDICATED_SPI, SD_SCK_MHZ(0), &softSpi)
#define BMPIMAGEOFFSET 54
#define BUFFPIXEL 6
#define NAMEMATCH ""
#define PALETTEDEPTH 16
char namebuf[32] = "/";
File root;
int pathlen;

// Função de Calculo da Tela Touch
int X, Y;
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300); // 300 É A SENSITIVIDADE
TSPoint waitTouch()
{

    TSPoint p;
    do
    {
        sonar.ping_cm();
        if (sonar.ping_cm() > 0){
            distancia = sonar.ping_cm();}

        Serial.print("Distancia:");
        Serial.println(distancia);

        while (chegada == 2)
        {
            distancia = sonar.ping_cm();
            if (distancia > 80)
            {
                chegada = 0;
                menu_Index();
            }
        }

        if (distancia > 2 && distancia < 30 && chegada == 0)
        {
            playerMP3.playFolder(1, 5);
            delay(3000);
            playerMP3.playFolder(1, 10);
            chegada = 1;
        }
        else if (distancia > 80 && chegada == 1)
        {
            playerMP3.playFolder(1, 12);
            tela_Chamado(5);
            delay(5000);
            menu = "menu_Index";
            menu_Index();
            chegada = 0;
        }

        p = ts.getPoint();
        pinMode(XM, OUTPUT);
        pinMode(YP, OUTPUT);

    } while ((p.z < MINPRESSURE) || (p.z > MAXPRESSURE));

    p.x = map(p.x, TS_LEFT, TS_RT, 320, 0);
    p.y = map(p.y, TS_BOT, TS_TOP, 0, 480);

    return p;
}

void setup()
{
    Serial.begin(9600);
    playerMP3Serial.begin(9600);
    tft.reset();
    tft.begin(0x9486); // CÓDIGO DO DRIVER DO DISPLAY
    tft.setRotation(2);

    uint16_t ID;

    // Teste Cartão SD Tela Touch
    bool good = SD.begin(SD_CS);
    if (!good)
    {
        Serial.print(F("cannot start SD"));
        while (1)
            ;
    }
    root = SD.open(namebuf);
    pathlen = strlen(namebuf);

    // Teste Cartão SD MP3
    if (!playerMP3.begin(playerMP3Serial))
    {
        Serial.println(F("Falha no Modulo MP3"));
        Serial.println(F("1.Confira as conexões!"));
        Serial.println(F("2.Confira o cartão SD!"));
        while (true)
        {
            delay(0);
        }
    }

#ifdef DEBUG
    Serial.println("Fim Setup");
#endif
    playerMP3.volume(volumeMP3);

    Intro();
    menu_Index();
}

void loop()
{
    TSPoint p = waitTouch();
    X = p.x;
    Y = p.y;

    Serial.print("X: ");
    Serial.print(X);
    Serial.print(" Y: ");
    Serial.println(Y);

    Touch();
    delay(50);
}

// Codigos para carregar imagens na tela
uint16_t read16(File &f)
{
    uint16_t result; // read little-endian
    f.read(&result, sizeof(result));
    return result;
}

uint32_t read32(File &f)
{
    uint32_t result;
    f.read(&result, sizeof(result));
    return result;
}

uint8_t showbmp(char *nm, int x, int y)
{
    File bmpFile;
    int bmpWidth, bmpHeight;         // W+H in pixels
    uint8_t bmpDepth;                // Bit depth (currently must be 24, 16, 8, 4, 1)
    uint32_t bmpImageoffset;         // Start of image data in file
    uint32_t rowSize;                // Not always = bmpWidth; may have padding
    uint8_t sdbuffer[3 * BUFFPIXEL]; // pixel in buffer (R+G+B per pixel)
    uint16_t lcdbuffer[(1 << PALETTEDEPTH) + BUFFPIXEL], *palette = NULL;
    uint8_t bitmask, bitshift;
    boolean flip = true; // BMP is stored bottom-to-top
    int w, h, row, col, lcdbufsiz = (1 << PALETTEDEPTH) + BUFFPIXEL, buffidx;
    uint32_t pos;          // seek position
    boolean is565 = false; //

    uint16_t bmpID;
    uint16_t n; // blocks read
    uint8_t ret;

    if ((x >= tft.width()) || (y >= tft.height()))
        return 1; // off screen

    bmpFile = SD.open(nm);            // Parse BMP header
    bmpID = read16(bmpFile);          // BMP signature
    (void)read32(bmpFile);            // Read & ignore file size
    (void)read32(bmpFile);            // Read & ignore creator bytes
    bmpImageoffset = read32(bmpFile); // Start of image data
    (void)read32(bmpFile);            // Read & ignore DIB header size
    bmpWidth = read32(bmpFile);
    bmpHeight = read32(bmpFile);
    n = read16(bmpFile);        // # planes -- must be '1'
    bmpDepth = read16(bmpFile); // bits per pixel
    pos = read32(bmpFile);      // format
    if (bmpID != 0x4D42)
        ret = 2; // bad ID
    else if (n != 1)
        ret = 3; // too many planes
    else if (pos != 0 && pos != 3)
        ret = 4; // format: 0 = uncompressed, 3 = 565
    else if (bmpDepth < 16 && bmpDepth > PALETTEDEPTH)
        ret = 5; // palette
    else
    {
        bool first = true;
        is565 = (pos == 3); // ?already in 16-bit format
        // BMP rows are padded (if needed) to 4-byte boundary
        rowSize = (bmpWidth * bmpDepth / 8 + 3) & ~3;
        if (bmpHeight < 0)
        { // If negative, image is in top-down order.
            bmpHeight = -bmpHeight;
            flip = false;
        }

        w = bmpWidth;
        h = bmpHeight;
        if ((x + w) >= tft.width()) // Crop area to be loaded
            w = tft.width() - x;
        if ((y + h) >= tft.height()) //
            h = tft.height() - y;

        if (bmpDepth <= PALETTEDEPTH)
        { // these modes have separate palette
            // bmpFile.seek(BMPIMAGEOFFSET); //palette is always @ 54
            bmpFile.seek(bmpImageoffset - (4 << bmpDepth)); // 54 for regular, diff for colorsimportant
            bitmask = 0xFF;
            if (bmpDepth < 8)
                bitmask >>= bmpDepth;
            bitshift = 8 - bmpDepth;
            n = 1 << bmpDepth;
            lcdbufsiz -= n;
            palette = lcdbuffer + lcdbufsiz;
            for (col = 0; col < n; col++)
            {
                pos = read32(bmpFile); // map palette to 5-6-5
                palette[col] = ((pos & 0x0000F8) >> 3) | ((pos & 0x00FC00) >> 5) | ((pos & 0xF80000) >> 8);
            }
        }

        // Set TFT address window to clipped image bounds
        tft.setAddrWindow(x, y, x + w - 1, y + h - 1);
        for (row = 0; row < h; row++)
        { // For each scanline...
            // Seek to start of scan line.  It might seem labor-
            // intensive to be doing this on every line, but this
            // method covers a lot of gritty details like cropping
            // and scanline padding.  Also, the seek only takes
            // place if the file position actually needs to change
            // (avoids a lot of cluster math in SD library).
            uint8_t r, g, b, *sdptr;
            int lcdidx, lcdleft;
            if (flip) // Bitmap is stored bottom-to-top order (normal BMP)
                pos = bmpImageoffset + (bmpHeight - 1 - row) * rowSize;
            else // Bitmap is stored top-to-bottom
                pos = bmpImageoffset + row * rowSize;
            if (bmpFile.position() != pos)
            { // Need seek?
                bmpFile.seek(pos);
                buffidx = sizeof(sdbuffer); // Force buffer reload
            }

            for (col = 0; col < w;)
            { // pixels in row
                lcdleft = w - col;
                if (lcdleft > lcdbufsiz)
                    lcdleft = lcdbufsiz;
                for (lcdidx = 0; lcdidx < lcdleft; lcdidx++)
                { // buffer at a time
                    uint16_t color;
                    // Time to read more pixel data?
                    if (buffidx >= sizeof(sdbuffer))
                    { // Indeed
                        bmpFile.read(sdbuffer, sizeof(sdbuffer));
                        buffidx = 0; // Set index to beginning
                        r = 0;
                    }
                    switch (bmpDepth)
                    { // Convert pixel from BMP to TFT format
                    case 32:
                    case 24:
                        b = sdbuffer[buffidx++];
                        g = sdbuffer[buffidx++];
                        r = sdbuffer[buffidx++];
                        if (bmpDepth == 32)
                            buffidx++; // ignore ALPHA
                        color = tft.color565(r, g, b);
                        break;
                    case 16:
                        b = sdbuffer[buffidx++];
                        r = sdbuffer[buffidx++];
                        if (is565)
                            color = (r << 8) | (b);
                        else
                            color = (r << 9) | ((b & 0xE0) << 1) | (b & 0x1F);
                        break;
                    case 1:
                    case 4:
                    case 8:
                        if (r == 0)
                            b = sdbuffer[buffidx++], r = 8;
                        color = palette[(b >> bitshift) & bitmask];
                        r -= bmpDepth;
                        b <<= bmpDepth;
                        break;
                    }
                    lcdbuffer[lcdidx] = color;
                }
                tft.pushColors(lcdbuffer, lcdidx, first);
                first = false;
                col += lcdidx;
            }                                                       // end cols
        }                                                           // end rows
        tft.setAddrWindow(0, 0, tft.width() - 1, tft.height() - 1); // restore full screen
        ret = 0;                                                    // good render
    }
    bmpFile.close();
    return (ret);
}