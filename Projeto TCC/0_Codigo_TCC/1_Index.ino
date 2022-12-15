void menu_Index(){
  tft.fillRoundRect(10, 15, 41, 41, 0, BLUE);
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Assistencia Técnica
  tft.fillRoundRect(20, 105, 278, 100, 10, RED);
  tft.fillRoundRect(23, 108, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(62, 128);
  tft.println("Assistencia");
  tft.setCursor(98, 158);
  tft.println("Tecnica");

  // Produtos
  tft.fillRoundRect(20, 225, 278, 100, 10, RED);
  tft.fillRoundRect(23, 228, 272, 94, 10, BLACK);

  tft.setTextSize(4);
  tft.setTextColor(WHITE);
  tft.setCursor(65, 260);
  tft.println("Produtos");

  // Impressão
  tft.fillRoundRect(20, 345, 278, 100, 10, RED);
  tft.fillRoundRect(23, 348, 272, 94, 10, BLACK);

  tft.setTextSize(4);
  tft.setTextColor(WHITE);
  tft.setCursor(60, 380);
  tft.println("Impressao");
}

void btn_Index(int caso)
{
  switch (caso)
  {

  // Assistencia Técnica
  case 1:
    tft.fillRoundRect(23, 108, 272, 94, 10, WHITE);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(62, 128);
    tft.println("Assistencia");
    tft.setCursor(98, 158);
    tft.println("Tecnica");

    menu = "menu_Assistencia";
    menu_Assistencia();
    break;

  // Produtos
  case 2:
    tft.fillRoundRect(23, 228, 272, 94, 10, WHITE);
    tft.setTextSize(4);
    tft.setCursor(65, 260);
    tft.setTextColor(BLACK);
    tft.println("Produtos");
    menu = "menu_Produtos";
    menu_Produtos();
    break;

  // Xerox
  case 3:

    tft.fillRoundRect(23, 348, 272, 94, 10, WHITE);
    tft.setCursor(60, 380);
    tft.setTextSize(4);
    tft.setTextColor(BLACK);
    tft.println("Impressao");
    menu_Impressao();
    menu = "menu_Impressao";
    break;
  }
}