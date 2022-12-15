void menu_Mouse()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  playerMP3.playFolder(1,11);

  // Mouse 1
  showbmp ("mouseMultilaser.bmp", 15, 95);
  tft.fillRoundRect(137, 92, 167, 112, 0, RED);
  tft.fillRoundRect(140, 95, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(170, 100);
  tft.println("Multilaser");
  tft.setCursor(144, 120);
  tft.println("Classic MO300");
  tft.setCursor(180, 150);
  tft.println("Com Fio");
  tft.setCursor(180, 185);
  tft.println("R$10,90");

  // Mouse 2
  showbmp ("mouseRedragon.bmp", 15, 220);
  tft.fillRoundRect(137, 217, 167, 112, 0, RED);
  tft.fillRoundRect(140, 220, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(175, 225);
  tft.println("Redragon");
  tft.setCursor(190, 245);
  tft.println("Cobra");
  tft.setCursor(180, 275);
  tft.println("Com Fio");
  tft.setCursor(175, 310);
  tft.println("R$119,90");

  // Mouse 3
  showbmp ("mouseLogitech.bmp", 15, 345);
  tft.fillRoundRect(137, 342, 167, 112, 0, RED);
  tft.fillRoundRect(140, 345, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(175, 351);
  tft.println("Logitech");
  tft.setCursor(175, 373);
  tft.println("G910 PRO");
  tft.setCursor(177, 402);
  tft.println("Sem Fio");
  tft.setCursor(175, 435);
  tft.println("R$799,99");
}
void btn_Mouse(int caso)
{
  switch (caso)
  {
  // Mouse 1
  case 1:

    tft.fillRoundRect(140, 95, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(170, 100);
    tft.println("Multilaser");
    tft.setCursor(147, 120);
    tft.println("Classic MO300");
    tft.setCursor(180, 150);
    tft.println("Com Fio");
    tft.setCursor(180, 185);
    tft.println("R$10,90");
    tela_Chamado(3);
    break;

  // Mouse 2
  case 2:
    tft.fillRoundRect(140, 220, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(175, 225);
    tft.println("Redragon");
    tft.setCursor(190, 245);
    tft.println("Cobra");
    tft.setCursor(180, 275);
    tft.println("Com Fio");
    tft.setCursor(175, 310);
    tft.println("R$119,90");
    tela_Chamado(3);
    break;

  // Mouse 3
  case 3:

    tft.fillRoundRect(140, 345, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(175, 351);
    tft.println("Logitech");
    tft.setCursor(175, 373);
    tft.println("G910 PRO");
    tft.setCursor(177, 402);
    tft.println("Sem Fio");
    tft.setCursor(175, 435);
    tft.println("R$799,99");
    tela_Chamado(3);
    break;
  }
}
