void menuVendaPC()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Computadores
  tft.fillRoundRect(20, 105, 278, 100, 10, RED);
  tft.fillRoundRect(23, 108, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(55, 145);
  tft.println("Computadores");

  // Notebooks
  tft.fillRoundRect(20, 225, 278, 100, 10, RED);
  tft.fillRoundRect(23, 228, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(80, 265);
  tft.println("Notebooks");

  // Monte seu PC
  tft.fillRoundRect(20, 345, 278, 100, 10, RED);
  tft.fillRoundRect(23, 348, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(73, 370);
  tft.println("Monte seu");
  tft.setCursor(70, 400);
  tft.println("Computador");
}

void btnVendaPC(int caso)
{
  switch (caso)
  {
  // Computadores
  case 1:
    tft.fillRoundRect(23, 108, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 145);
    tft.println("Computadores");
    menuComputadores();
    page = "menuComputadores";

    break;

  // Notebooks
  case 2:
    tft.fillRoundRect(23, 228, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(80, 265);
    tft.println("Notebooks");
    menuNotebook();
    page = "menuNotebook";
    break;

  // Monte seu PC
  case 3:

    tft.fillRoundRect(23, 348, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(73, 370);
    tft.println("Monte seu");
    tft.setCursor(70, 400);
    tft.println("Computador");
    nProduto = 16;
    telaCaixa(4);
    break;
  }
}
