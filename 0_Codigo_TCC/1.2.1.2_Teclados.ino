void menuTeclado()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Teclado 1
  showBMP("tecladoLogitech.bmp", 15, 95);
  tft.fillRoundRect(137, 92, 167, 112, 0, RED);
  tft.fillRoundRect(140, 95, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(175, 100);
  tft.println("Logitech");
  tft.setCursor(200, 120);
  tft.println("K120");
  tft.setCursor(175, 150);
  tft.println("Membrana");
  tft.setCursor(180, 185);
  tft.println("R$65,00");

  // Teclado 2
  showBMP("tecladoRedragon.bmp", 15, 220);
  tft.fillRoundRect(137, 217, 167, 112, 0, RED);
  tft.fillRoundRect(140, 220, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(175, 225);
  tft.println("Redragon");
  tft.setCursor(200, 245);
  tft.println("K607");
  tft.setCursor(175, 275);
  tft.println("Mecanico");
  tft.setCursor(175, 310);
  tft.println("R$219,99");

  // Teclado 3
  showBMP("tecladoHyperx.bmp", 15, 345);
  tft.fillRoundRect(137, 342, 167, 112, 0, RED);
  tft.fillRoundRect(140, 345, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(185, 351);
  tft.println("HyperX");
  tft.setCursor(145, 375);
  tft.println("Alloy Origins");
  tft.setCursor(175, 405);
  tft.println("Mecanico");
  tft.setCursor(175, 435);
  tft.println("R$479,99");
}
void btnTeclado(int caso)
{
  switch (caso)
  {
  // Teclado 1
  case 1:

    tft.fillRoundRect(140, 95, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(175, 100);
    tft.println("Logitech");
    tft.setCursor(200, 120);
    tft.println("K120");
    tft.setCursor(175, 150);
    tft.println("Membrana");
    tft.setCursor(180, 185);
    tft.println("R$65,00");
    nProduto = 4;
    telaCaixa(3);
    break;

  // Teclado 2
  case 2:
    tft.fillRoundRect(140, 220, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(175, 225);
    tft.println("Redragon");
    tft.setCursor(200, 245);
    tft.println("K607");
    tft.setCursor(175, 275);
    tft.println("Mecanico");
    tft.setCursor(175, 310);
    tft.println("R$219,99");
    nProduto = 5;
    telaCaixa(3);
    break;

  // Teclado 3
  case 3:

    tft.fillRoundRect(140, 345, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(175, 351);
    tft.setCursor(185, 351);
    tft.println("HyperX");
    tft.setCursor(145, 375);
    tft.println("Alloy Origins");
    tft.setCursor(175, 405);
    tft.println("Mecanico");
    tft.setCursor(175, 435);
    tft.println("R$479,99");
    nProduto = 6;
    telaCaixa(3);
    break;
  }
}
