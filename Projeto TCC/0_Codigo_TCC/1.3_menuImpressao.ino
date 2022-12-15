void menu_Impressao()
{
  btnVoltar(0);
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Documentos
  tft.fillRoundRect(20, 95, 278, 80, 10, RED);
  tft.fillRoundRect(23, 98, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(70, 125);
  tft.println("Documentos");

  // Boletos
  tft.fillRoundRect(20, 185, 278, 80, 10, RED);
  tft.fillRoundRect(23, 188, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(85, 210);
  tft.println("Boletos");

  // Fotos
  tft.fillRoundRect(20, 275, 278, 80, 10, RED);
  tft.fillRoundRect(23, 278, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(110, 300);
  tft.println("Fotos");

  // Outros
  tft.fillRoundRect(20, 365, 278, 80, 10, RED);
  tft.fillRoundRect(23, 368, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(100, 390);
  tft.println("Outros");
}

void btn_Impressao(int caso)
{
  switch (caso)
  {
  // Documentos
  case 1:

    tft.fillRoundRect(23, 98, 272, 74, 10, WHITE);

    tft.setCursor(60, 125);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.println("Documentos");
    tela_Chamado(1);
    break;

  // Boletos
  case 2:
    tft.fillRoundRect(23, 188, 272, 74, 10, WHITE);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(85, 210);
    tft.println("Boletos");
    tela_Chamado(1);
    break;

  // Fotos
  case 3:

    tft.fillRoundRect(23, 278, 272, 74, 10, WHITE);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(110, 300);
    tft.println("Fotos");
    tela_Chamado(2);
    break;

  // Outros
  case 4:
    tft.fillRoundRect(23, 368, 272, 74, 10, WHITE);
    tft.setCursor(95, 390);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(100, 390);
    tft.println("Outros");
    tela_Chamado(2);
    break;
  }
}
