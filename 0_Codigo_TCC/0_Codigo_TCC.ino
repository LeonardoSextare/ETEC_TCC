// INCLUSÃO DE BIBLIOTECAS
#include <TouchScreen.h>         // Tela Touch
#include <MCUFRIEND_kbv.h>       // Tela Touch
MCUFRIEND_kbv tft;               // Tela Touch
#include "SoftwareSerial.h"      // Modulo de Som
#include "DFRobotDFPlayerMini.h" // Modulo de Som
#include <NewPing.h>             // Modulo Ultra Sonico
#include <SPI.h>                 // Leitor do Cartão da Tela
#include <SdFat.h>               // Leitor do Cartão da Tela

// DEFINIÇÕES TELA (PINOS)
#define LCD_CS A3
#define LCD_CD A2
#define LCD_WR A1
#define LCD_RD A0
#define LCD_RESET A4

// DEFINIÇÕES DA TELA
#define LIGADO 0x07E0
#define DESLIGADO 0xF800
#define MINPRESSURE 10
#define MAXPRESSURE 1000

// DEFINIÇÕES LEITOR CARTÃO TELA
#define USE_SDFAT
SoftSpiDriver<12, 11, 13> softSpi;
SdFat SD;
#define SD_CS SdSpiConfig(10, DEDICATED_SPI, SD_SCK_MHZ(0), &softSpi)
#define BMPIMAGEOFFSET 54
#define BUFFPIXEL 1
#define NAMEMATCH ""
#define PALETTEDEPTH 16
char namebuf[32] = "/";
File root;
int pathlen;

// DEFINIÇÕES DE CORES
#define USE_MEGA_8BIT_SHIELD
#define WHITE 0xFFFF
#define YELLOW 0xFFE0
#define RED 0xF800
#define BLUE 0x001F
#define BLACK 0x0000

// CALIBRAÇÃO TOUCH
#define YP A2
#define XM A3
#define YM 8
#define XP 9
#define TS_LEFT 119
#define TS_RT 921
#define TS_TOP 68
#define TS_BOT 968

// MODULO MP3
#define pinRx 37
#define pinTx 38
#define volumeMP3 10
#define DEBUG
SoftwareSerial playerMP3Serial(pinRx, pinTx);
DFRobotDFPlayerMini playerMP3;

// MODULO BLUETOOTH
#define btRX 52
#define btTX 53
SoftwareSerial btSerial(btRX, btTX);

// MODULO ULTRA SOM
#define trig_pin 31
#define echo_pin 50
#define max_dist 200
NewPing sonar(trig_pin, echo_pin, max_dist);

// VARIAVEIS GLOBAIS
String page = "menuPrincipal";
unsigned long int tempo;
char *produto[] = {"", "Mouse Multilaser - Classic MO300", "Mouse Redragon - Cobra", "Mouse Logitech - G910 PRO", "Teclado Logitech - K120", "Teclado Redragon - K607", "Teclado HyperX - Alloy Origins", "Headset Fortrek - HBL-101", "Headset Astro - A10", "Headset HyperX - Cloud Mix", "PC X-Linne - Intel Core i3", "PC Lenovo - Intel Core i5", "PC Dell - Intel Core i7", "Notebook Asus - M515", "Note Lenovo - Legion 5", "Notebook Dell - Alienware", "Monte seu Computador"};
String assistencia, equipamento, funcionamento, windows, lentidao, desligando, barulho, monitor;

int distancia, nProduto, clique = 1000;

// CALCULO X E Y DA TELA TOUCH
int X, Y;
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300); // 300 É A SENSITIVIDADE
TSPoint waitTouch()
{
    TSPoint p;
    do
    {
        p = ts.getPoint();
        pinMode(XM, OUTPUT);
        pinMode(YP, OUTPUT);

        sonar.ping_cm();
        distancia = sonar.ping_cm();

        while (btSerial.available() > 0)
        {
            btRead(btSerial.read());
            Serial.println(btSerial.read());
        }

    } while ((p.z < MINPRESSURE) || (p.z > MAXPRESSURE));

    p.x = map(p.x, TS_LEFT, TS_RT, 0, 280);
    p.y = map(p.y, TS_BOT, TS_TOP, 0, 320);

    return p;
}

void setup()
{
    uint16_t ID;
    Serial.begin(9600);
    btSerial.begin(9600);
    tft.reset();
    tft.begin(0x9488); // CÓDIGO DO DRIVER DO DISPLAY
    tft.setRotation(2);

    bool good = SD.begin(SD_CS);
    if (!good)
    {
        Serial.print(F("cannot start SD"));
        while (1)
            ;
    }
    root = SD.open(namebuf);
    pathlen = strlen(namebuf);

    Intro();

    menuPrincipal();
}

void loop()
{
    TSPoint p = waitTouch();
    X = p.x;
    Y = p.y;

    sonar.ping_cm();
    distancia = sonar.ping_cm();
    btRead(btSerial.read());
    Serial.println(distancia);

    Touch();

    Serial.println("teste");
    delay(50); // Delay
}

void Intro()
{
    tft.fillScreen(BLACK);
    tft.setTextSize(3);
    tft.setCursor(40, 30);
    tft.setTextColor(RED);
    tft.println("Projeto - TCC");

    tft.setCursor(60, 80);
    tft.setTextColor(WHITE);
    tft.println("Integrantes");

    tft.setCursor(15, 120);
    tft.println("Leonardo Sextare");

    tft.setCursor(15, 150);
    tft.println("Plinio Chagas");

    tft.setCursor(15, 180);
    tft.println("Vinicius Dias");

    delay(2000);

    // TechNone Informatica
    tft.fillRoundRect(0, 0, 320, 70, 0, RED);
    tft.fillRoundRect(3, 3, 314, 64, 0, BLUE);

    tft.setTextSize(3);
    tft.setTextColor(WHITE);
    tft.setCursor(90, 10);
    tft.println("TechNone");
    tft.setCursor(65, 37);
    tft.println("Informatica");
}
void btRead(byte alerta)
{

    switch (alerta)
    {
    case 1: // Falar
        tft.setTextColor(RED);
        tft.setTextSize(4);
        tft.setCursor(15, 120);
        tft.println("Teste");
        delay(1000);
        menuPrincipal();
        break;

        case 2: // Falar
        tft.setTextColor(RED);
        tft.setTextSize(4);
        tft.setCursor(15, 120);
        tft.println("Conectado");
        delay (1000);
        menuPrincipal();
        break;

        case 3: // Falar
        tft.setTextColor(RED);
        tft.setTextSize(4);
        tft.setCursor(15, 120);
        tft.println("Desconectado");
        delay (1000);
        menuPrincipal();
        break;
    }
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

uint8_t showBMP(char *nm, int x, int y)
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
