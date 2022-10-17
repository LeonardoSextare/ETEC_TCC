// Desenha os Botões e Escrita
void menuAssistencia()
{

  btnVoltar(0);

  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Computadores e Notebooks
  tft.fillRoundRect(20, 95, 278, 80, 10, RED);
  tft.fillRoundRect(23, 98, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(50, 108);
  tft.println("Computadores");
  tft.setCursor(58, 138);
  tft.println("e Notebooks");

  // Impressoras
  tft.fillRoundRect(20, 185, 278, 80, 10, RED);
  tft.fillRoundRect(23, 188, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(60, 215);
  tft.println("Impressoras");

  // Nobreaks
  tft.fillRoundRect(20, 275, 278, 80, 10, RED);
  tft.fillRoundRect(23, 278, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(85, 305);
  tft.println("Nobreaks");

  // Outros Equipamentos
  tft.fillRoundRect(20, 365, 278, 80, 10, RED);
  tft.fillRoundRect(23, 368, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(100, 380);
  tft.println("Outros");
  tft.setCursor(55, 405);
  tft.println("Equipamentos");
}

// Efeito e função do clique dos botões
void btnAssistencia(int caso)
{
  switch (caso)
  {

  // Computadores e Notebooks
  case 1:

    tft.fillRoundRect(23, 98, 272, 74, 10, WHITE);
    tft.setCursor(50, 108);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.println("Computadores");
    tft.setCursor(58, 138);
    tft.println("e Notebooks");
    page = "menuPC";
    menuPC();
    equipamento = "Computador/Notebook";
    break;

  // Impressoras
  case 2:
    tft.fillRoundRect(23, 188, 272, 74, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(60, 215);
    tft.println("Impressoras");
    page = "menuImpressora";
    menuImpressora();
    equipamento = "Impressora";
    break;

  // Nobreaks
  case 3:
    tft.fillRoundRect(23, 278, 272, 74, 10, WHITE);
    tft.setCursor(85, 305);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.println("Nobreaks");
    page = "menuNobreak";
    menuNobreak();
    equipamento = "Nobreak";
    break;

  // Outros Equipamentos
  case 4:
    tft.fillRoundRect(23, 368, 272, 74, 10, WHITE);
    tft.setCursor(95, 390);
    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(105, 380);
    tft.println("Outros");
    tft.setCursor(55, 405);
    tft.println("Equipamentos");
    equipamento = "Outros";
    break;
  }
}
