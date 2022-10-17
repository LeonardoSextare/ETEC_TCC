void menuVendaCabo()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Cabo 1
  showBMP("caboHdmi.bmp", 15, 95);
  tft.fillRoundRect(137, 92, 167, 112, 0, RED);
  tft.fillRoundRect(140, 95, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(200, 100);
  tft.println("PIX");
  tft.setCursor(165, 120);
  tft.println("HDMI Gold");
  tft.setCursor(175, 150);
  tft.println("3 Metros");
  tft.setCursor(180, 185);
  tft.println("R$14,90");

  // PC 2
  showBMP("caboVga.bmp", 15, 220);
  tft.fillRoundRect(137, 217, 167, 112, 0, RED);
  tft.fillRoundRect(140, 220, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(200, 225);
  tft.println("MD9");
  tft.setCursor(170, 245);
  tft.println("Cabo VGA");
  tft.setCursor(175, 275);
  tft.println("2 Metros");
  tft.setCursor(175, 310);
  tft.println("R$19,99");

  // PC 3
  showBMP("caboUsb.bmp", 15, 345);
  tft.fillRoundRect(137, 342, 167, 112, 0, RED);
  tft.fillRoundRect(140, 345, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(145, 351);
  tft.println("Akasa Proslim");
  tft.setCursor(160, 373);
  tft.println("USB Tipo B");
  tft.setCursor(170, 402);
  tft.println("2 Metros");
  tft.setCursor(175, 435);
  tft.println("R$70,00");
}
void btnVendaCabo(int caso)
{
  switch (caso)
  {
  // Cabo 1
  case 1:

    tft.fillRoundRect(140, 95, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(200, 100);
    tft.println("PIX");
    tft.setCursor(165, 120);
    tft.println("HDMI Gold");
    tft.setCursor(175, 150);
    tft.println("3 Metros");
    tft.setCursor(180, 185);
    tft.println("R$14,90");
    break;

  // Cabo 2
  case 2:
    tft.fillRoundRect(140, 220, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(200, 225);
    tft.println("MD9");
    tft.setCursor(170, 245);
    tft.println("Cabo VGA");
    tft.setCursor(175, 275);
    tft.println("2 Metros");
    tft.setCursor(175, 310);
    tft.println("R$19,99");
    break;

  // Cabo 3
  case 3:

    tft.fillRoundRect(140, 345, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(145, 351);
    tft.println("Akasa Proslim");
    tft.setCursor(160, 373);
    tft.println("USB Tipo B");
    tft.setCursor(170, 402);
    tft.println("2 Metros");
    tft.setCursor(175, 435);
    tft.println("R$70,00");
    break;
  }
}
