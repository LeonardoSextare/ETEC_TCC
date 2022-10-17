void menuProdutos()
{
  btnVoltar(0);
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Perifericos
  tft.fillRoundRect(20, 95, 278, 80, 10, RED);
  tft.fillRoundRect(23, 98, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(60, 125);
  tft.println("Perifericos");

  // Computadores e Notebooks
  tft.fillRoundRect(20, 185, 278, 80, 10, RED);
  tft.fillRoundRect(23, 188, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(50, 198);
  tft.println("Computadores");
  tft.setCursor(58, 228);
  tft.println("e Notebooks");

  // Cabos
  tft.fillRoundRect(20, 275, 278, 80, 10, RED);
  tft.fillRoundRect(23, 278, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(110, 302);
  tft.println("Cabos");

  // Outros

  tft.fillRoundRect(20, 365, 278, 80, 10, RED);
  tft.fillRoundRect(23, 368, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(100, 390);
  tft.println("Outros");
}

void btnProdutos(int caso)
{
  switch (caso)
  {
  // Perifericos
  case 1:

    tft.fillRoundRect(23, 98, 272, 74, 10, WHITE);

    tft.setCursor(60, 125);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.println("Perifericos");
    page = "menuPerifericos";
    menuPerifericos();
    break;

  // Computadores Desktop
  case 2:
    tft.fillRoundRect(23, 188, 272, 74, 10, WHITE);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(50, 198);
    tft.println("Computadores");
    tft.setCursor(58, 228);
    tft.println("e Notebooks");
    menuVendaPC();
    page = "menuVendaPC";
    break;

  // Cabos
  case 3:

    tft.fillRoundRect(23, 278, 272, 74, 10, WHITE);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(110, 302);
    tft.println("Cabos");
    page = "menuCabo";
    menuCabo();
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
