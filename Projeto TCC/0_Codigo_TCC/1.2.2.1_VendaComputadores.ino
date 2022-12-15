void menu_VendaComputadores()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);
  
  playerMP3.playFolder(1,11);

  // PC 1
  showbmp("pcNsei.bmp", 15, 95);
  tft.fillRoundRect(137, 92, 167, 112, 0, RED);
  tft.fillRoundRect(140, 95, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(175, 100);
  tft.println("X-Linne");
  tft.setCursor(145, 120);
  tft.println("Intel core i3");
  tft.setCursor(180, 140);
  tft.println("4GB DDR3");
  tft.setCursor(170, 160);
  tft.println("500GB SSD");
  tft.setCursor(160, 185);
  tft.println("R$1.390,00");

  // PC 2
  showbmp("pcLenovo.bmp", 15, 220);
  tft.fillRoundRect(137, 217, 167, 112, 0, RED);
  tft.fillRoundRect(140, 220, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(185, 225);
  tft.println("Lenovo");
  tft.setCursor(145, 245);
  tft.println("Intel core i5");
  tft.setCursor(180, 265);
  tft.println("8GB DDR4");
  tft.setCursor(170, 285);
  tft.println("256GB SSD");
  tft.setCursor(160, 310);
  tft.println("R$2.999,00");

  // PC 3
  showbmp("pcDell.bmp", 15, 345);
  tft.fillRoundRect(137, 342, 167, 112, 0, RED);
  tft.fillRoundRect(140, 345, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(200, 350);
  tft.println("Dell");
  tft.setCursor(145, 370);
  tft.println("Intel core i7");
  tft.setCursor(175, 390);
  tft.println("16GB DDR4");
  tft.setCursor(170, 410);
  tft.println("500GB SSD");
  tft.setCursor(160, 435);
  tft.println("R$6.490,00");
}
void btn_VendaComputadores(int caso)
{
  switch (caso)
  {
  // PC 1
  case 1:

    tft.fillRoundRect(140, 95, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(175, 100);
    tft.println("X-Linne");
    tft.setCursor(145, 120);
    tft.println("Intel core i3");
    tft.setCursor(180, 140);
    tft.println("4GB DDR3");
    tft.setCursor(170, 160);
    tft.println("500GB SSD");
    tft.setCursor(160, 185);
    tft.println("R$1.390,00");
    tela_Chamado(3);
    break;

  // PC 2
  case 2:
    tft.fillRoundRect(140, 220, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(185, 225);
    tft.println("Lenovo");
    tft.setCursor(145, 245);
    tft.println("Intel core i5");
    tft.setCursor(180, 265);
    tft.println("8GB DDR4");
    tft.setCursor(170, 285);
    tft.println("256GB SSD");
    tft.setCursor(160, 310);
    tft.println("R$2.999,00");
    tela_Chamado(3);
    break;

  // PC 3
  case 3:

    tft.fillRoundRect(140, 345, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(200, 350);
    tft.println("Dell");
    tft.setCursor(145, 370);
    tft.println("Intel core i7");
    tft.setCursor(175, 390);
    tft.println("16GB DDR4");
    tft.setCursor(170, 410);
    tft.println("500GB SSD");
    tft.setCursor(160, 435);
    tft.println("R$6.490,00");
    tela_Chamado(3);
    break;
  }
}
