void menuPerifericos()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Mouses
  tft.fillRoundRect(20, 95, 278, 80, 10, RED);
  tft.fillRoundRect(23, 98, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(100, 125);
  tft.println("Mouses");

  // Teclados
  tft.fillRoundRect(20, 185, 278, 80, 10, RED);
  tft.fillRoundRect(23, 188, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(85, 215);
  tft.println("Teclados");

  // Fones de Ouvido
  tft.fillRoundRect(20, 275, 278, 80, 10, RED);
  tft.fillRoundRect(23, 278, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(75, 305);
  tft.println("Headphones");

  // Outros

  tft.fillRoundRect(20, 365, 278, 80, 10, RED);
  tft.fillRoundRect(23, 368, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(100, 390);
  tft.println("Outros");
}

void btnPerifericos(int caso)
{
  switch (caso)
  {
  // Mouses
  case 1:

    tft.fillRoundRect(23, 98, 272, 74, 10, WHITE);

    tft.setCursor(100, 125);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.println("Mouses");
    page = "menuMouse";
    menuMouse();
    break;

  // Teclados
  case 2:
    tft.fillRoundRect(23, 188, 272, 74, 10, WHITE);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(85, 215);
    tft.println("Teclados");
    page = "menuTeclado";
    menuTeclado();
    break;

  // Fones de Ouvido
  case 3:

    tft.fillRoundRect(23, 278, 272, 74, 10, WHITE);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(75, 305);
    tft.println("Headphones");
    page = "menuFone";
    menuFone();
    break;

  // Outros
  case 4:
    tft.fillRoundRect(23, 368, 272, 74, 10, WHITE);
    tft.setCursor(95, 390);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(100, 390);
    tft.println("Outros");
    telaCaixa(3);
    break;
  }
}
