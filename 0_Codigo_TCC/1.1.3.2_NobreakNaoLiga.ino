// Desenha os Botões e Escrita
void menu_NobreakNaoLiga()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Sentiu cheiro de queimado?

  tft.fillRoundRect(0, 70, 320, 35, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(8, 80);
  tft.println("Sentiu cheiro de queimado?");

  // Sim
  tft.fillRoundRect(7, 115, 150, 50, 10, RED);
  tft.fillRoundRect(10, 118, 144, 44, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(55, 128);
  tft.println("Sim");

  // Não
  tft.fillRoundRect(165, 115, 150, 50, 10, RED);
  tft.fillRoundRect(168, 118, 144, 44, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(215, 128);
  tft.println("Nao");

  // Conectou impressora nele?

  tft.fillRoundRect(0, 170, 320, 35, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(10, 178);
  tft.println("Conectou Impressora nele?");

  // Sim
  tft.fillRoundRect(7, 215, 150, 50, 10, RED);
  tft.fillRoundRect(10, 218, 144, 44, 10, BLACK);
  tft.setTextSize(3);
  tft.setCursor(55, 228);
  tft.println("Sim");

  // Não
  tft.fillRoundRect(165, 215, 150, 50, 10, RED);
  tft.fillRoundRect(168, 218, 144, 44, 10, BLACK);
  tft.setCursor(215, 228);
  tft.println("Nao");

  // Ele fica apitando?

  tft.fillRoundRect(0, 275, 320, 35, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(10, 285);
  tft.println("Ele fica apitando?");

  // Sim
  tft.fillRoundRect(7, 320, 150, 50, 10, RED);
  tft.fillRoundRect(10, 323, 144, 44, 10, BLACK);
  tft.setTextSize(3);
  tft.setCursor(55, 335);
  tft.println("Sim");

  // Não
  tft.fillRoundRect(165, 320, 150, 50, 10, RED);
  tft.fillRoundRect(168, 323, 144, 44, 10, BLACK);
  tft.setCursor(215, 335);
  tft.println("Nao");

  // Solicitar Assistencia
  tft.fillRoundRect(20, 385, 278, 80, 10, RED);
  tft.fillRoundRect(23, 388, 272, 74, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(80, 400);
  tft.println("Solicitar");
  tft.setCursor(55, 430);
  tft.println("Assistencia");
}

// Efeito e função do clique dos botões
void btn_NobreakNaoLiga(int caso)
{
  switch (caso)
  {

  // Sentiu cheiro de queimado?
  case 1:
    tft.fillRoundRect(10, 118, 144, 44, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 128);
    tft.println("Sim");

    tft.fillRoundRect(168, 118, 144, 44, 10, BLACK);

    tft.setTextColor(WHITE);
    tft.setCursor(215, 128);
    tft.println("Nao");

    break;

  case 2:
    tft.fillRoundRect(10, 118, 144, 44, 10, BLACK);

    tft.setTextSize(3);
    tft.setTextColor(WHITE);
    tft.setCursor(55, 128);
    tft.println("Sim");

    tft.fillRoundRect(168, 118, 144, 44, 10, WHITE);

    tft.setTextColor(BLACK);
    tft.setCursor(215, 128);
    tft.println("Nao");

    break;

  // Conectou impressora nele?
  case 3:
    tft.fillRoundRect(10, 218, 144, 44, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 228);
    tft.println("Sim");

    tft.fillRoundRect(168, 218, 144, 44, 10, BLACK);

    tft.setTextColor(WHITE);
    tft.setCursor(215, 228);
    tft.println("Nao");

    break;

  case 4:
    tft.fillRoundRect(10, 218, 144, 44, 10, BLACK);

    tft.setTextSize(3);
    tft.setTextColor(WHITE);
    tft.setCursor(55, 228);
    tft.println("Sim");

    tft.fillRoundRect(168, 218, 144, 44, 10, WHITE);

    tft.setTextColor(BLACK);
    tft.setCursor(215, 228);
    tft.println("Nao");

    break;

  // Desliga de forma inesperada
  case 5:
    tft.fillRoundRect(10, 323, 144, 44, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 335);
    tft.println("Sim");

    tft.fillRoundRect(168, 323, 144, 44, 10, BLACK);

    tft.setTextColor(WHITE);
    tft.setCursor(215, 335);
    tft.println("Nao");

    break;

  case 6:
    tft.fillRoundRect(10, 323, 144, 44, 10, BLACK);

    tft.setTextSize(3);
    tft.setTextColor(WHITE);
    tft.setCursor(55, 335);
    tft.println("Sim");

    tft.fillRoundRect(168, 323, 144, 44, 10, WHITE);

    tft.setTextColor(BLACK);
    tft.setCursor(215, 335);
    tft.println("Nao");

    break;

  // Solicitar Assistencia
  case 7:
    tft.fillRoundRect(23, 388, 272, 74, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(80, 400);
    tft.println("Solicitar");
    tft.setCursor(55, 430);
    tft.println("Assistencia");
    tela_Chamado(4);

    break;

  // Voltar
  case 8:
    tft.fillTriangle(10, 35, 50, 15, 50, 55, WHITE);
    tft.fillTriangle(15, 35, 47, 19, 47, 51, BLACK);
    menu = "menu_Impressora";
    menu_Impressora();
    break;
  }
}
