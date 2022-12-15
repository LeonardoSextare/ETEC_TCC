void Intro()
{
    
    tft.fillScreen(FUNDO);

    tft.fillRoundRect(15, 20, 290, 80, 10, BORDA);
    tft.fillRoundRect(20, 25, 280, 70, 10, BOTAO);
    tft.setTextSize(3);
    tft.setCursor(60, 35);
    tft.setTextColor(WHITE);
    tft.println("ETEC - Jales");
    tft.setCursor(50, 65);
    tft.println("Projeto - TCC");

    tft.setCursor(60, 120);
    tft.setTextColor(WHITE);
    tft.println("Integrantes");

    tft.setCursor(18, 160);
    tft.println("Leonardo Sextare");

    tft.setCursor(40, 210);
    tft.println("Plinio Chagas");

    tft.setCursor(40, 260);
    tft.println("Vinicius Dias");

    delay(5000);

    tft.fillScreen(WHITE);    
    
    //TechNone Informatica
    tft.fillRoundRect(0, 0, 320, 70, 0, RED);
    tft.fillRoundRect(3, 3, 314, 64, 0, BLUE);
    tft.setTextSize(3);
    tft.setTextColor(WHITE);
    tft.setCursor(90, 10);
    tft.println("TechNone");
    tft.setCursor(65, 37);
    tft.println("Informatica");

    playerMP3.playFolder(1, 4);
}