// Desenha os Botões e Escrita
void menuPcLiga()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Seu Computador é:

  tft.fillRoundRect(0, 70, 320, 35, 0, BLACK);
  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(10, 75);
  tft.println("Inicia o Windows?:");

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

  // Está lento?

  tft.fillRoundRect(0, 170, 320, 35, 0, BLACK);
  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(10, 175);
  tft.println("Esta lento?");

  // Sim
  tft.fillRoundRect(7, 215, 150, 50, 10, RED);
  tft.fillRoundRect(10, 218, 144, 44, 10, BLACK);

  tft.setCursor(55, 228);
  tft.println("Sim");

  // Não
  tft.fillRoundRect(165, 215, 150, 50, 10, RED);
  tft.fillRoundRect(168, 218, 144, 44, 10, BLACK);
  tft.setCursor(215, 228);
  tft.println("Nao");

  // Desliga de forma inesperada

  tft.fillRoundRect(0, 275, 320, 35, 0, BLACK);
  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(10, 280);
  tft.println("Desliga sozinho?");

  // Sim
  tft.fillRoundRect(7, 320, 150, 50, 10, RED);
  tft.fillRoundRect(10, 323, 144, 44, 10, BLACK);

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
void btnPcLiga(int caso)
{
  switch (caso)
  {

  // Inicia o Windows??
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
    windows = "Sim";

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
    windows = "Nao";

    break;

  // Esta lento?
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
    lentidao = "Sim";

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
    lentidao = "Nao";

    break;

  // Desliga Sozinho?
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
    desligando ="Sim";

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
    desligando ="Nao";

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
    telaCaixa (4);

    break;
  }
}
