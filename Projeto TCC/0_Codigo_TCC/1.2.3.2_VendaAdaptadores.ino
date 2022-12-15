void menu_VendaAdaptador()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  playerMP3.playFolder(1,11);

  // Adaptador 1
  showbmp("adaptadorHdmi.bmp", 15, 95);
  tft.fillRoundRect(137, 92, 167, 112, 0, RED);
  tft.fillRoundRect(140, 95, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(210, 100);
  tft.println("F3");
  tft.setCursor(165, 120);
  tft.println("HDMI X VGA");
  tft.setCursor(180, 185);
  tft.println("R$29,90");

  // Adaptador 2
  showbmp("adaptadorP3.bmp", 15, 220);
  tft.fillRoundRect(137, 217, 167, 112, 0, RED);
  tft.fillRoundRect(140, 220, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(190, 225);
  tft.println("Lelong");
  tft.setCursor(185, 245);
  tft.println("P3 X P2");
  tft.setCursor(175, 310);
  tft.println("R$14,90");

  // Adaptador 3
  showbmp("adaptadorUsb.bmp", 15, 345);
  tft.fillRoundRect(137, 342, 167, 112, 0, RED);
  tft.fillRoundRect(140, 345, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(180, 351);
  tft.println("C3 Tech");
  tft.setCursor(160, 373);
  tft.println("USB X M-USB");
  tft.setCursor(175, 435);
  tft.println("R$19,90");
}
void btn_VendaAdaptador(int caso)
{
  switch (caso)
  {
  // Adaptador 1
  case 1:

    tft.fillRoundRect(140, 95, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(210, 100);
    tft.println("F3");
    tft.setCursor(165, 120);
    tft.println("HDMI X VGA");
    tft.setCursor(180, 185);
    tft.println("R$29,90");
    break;

  // Adaptador 2
  case 2:
    tft.fillRoundRect(140, 220, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(190, 225);
    tft.println("Lelong");
    tft.setCursor(185, 245);
    tft.println("P3 X P2");
    tft.setCursor(175, 310);
    tft.println("R$14,90");
    break;

  // Adaptador 3
  case 3:

    tft.fillRoundRect(140, 345, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(180, 351);
    tft.println("C3 Tech");
    tft.setCursor(160, 373);
    tft.println("USB X M-USB");
    tft.setCursor(175, 435);
    tft.println("R$19,90");
    break;
  }
}
