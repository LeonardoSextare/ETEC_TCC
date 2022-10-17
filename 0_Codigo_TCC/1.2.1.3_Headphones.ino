void menuFone()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Fone 1
  showBMP("headsetFortrek.bmp", 15, 95);
  tft.fillRoundRect(137, 92, 167, 112, 0, RED);
  tft.fillRoundRect(140, 95, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(185, 100);
  tft.println("Fortrek");
  tft.setCursor(185, 120);
  tft.println("HBL-101");
  tft.setCursor(180, 185);
  tft.println("R$19,90");

  // Fone 2
  showBMP("headsetAstro.bmp", 15, 220);
  tft.fillRoundRect(137, 217, 167, 112, 0, RED);
  tft.fillRoundRect(140, 220, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(190, 225);
  tft.println("ASTRO");
  tft.setCursor(200, 245);
  tft.println("A10");
  tft.setCursor(170, 310);
  tft.println("R$249,99");

  // Fone 3
  showBMP("headsetHyperx.bmp", 15, 345);
  tft.fillRoundRect(137, 342, 167, 112, 0, RED);
  tft.fillRoundRect(140, 345, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(190, 351);
  tft.println("HyperX");
  tft.setCursor(170, 373);
  tft.println("Cloud Mix");
  tft.setCursor(170, 435);
  tft.println("R$599,99");
}
void btnFone(int caso)
{
  switch (caso)
  {
  // Fone 1
  case 1:

    tft.fillRoundRect(140, 95, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(185, 100);
    tft.println("Fortrek");
    tft.setCursor(185, 120);
    tft.println("HBL-101");
    tft.setCursor(180, 185);
    tft.println("R$19,90");
    nProduto = 7;
    telaCaixa(3);
    break;

  // Fone 2
  case 2:
    tft.fillRoundRect(140, 220, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(175, 225);
    tft.setCursor(190, 225);
    tft.println("ASTRO");
    tft.setCursor(200, 245);
    tft.println("A10");
    tft.setCursor(170, 310);
    tft.println("R$249,99");
    nProduto = 8;
    telaCaixa(3);
    break;

  // Fone 3
  case 3:

    tft.fillRoundRect(140, 345, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(190, 351);
    tft.println("HyperX");
    tft.setCursor(170, 373);
    tft.println("Cloud Mix");
    tft.setCursor(170, 435);
    tft.println("R$599,99");
    nProduto = 9;
    telaCaixa(3);
    break;
  }
}
