// Desenha os Botões e Escrita
void menu_Nobreak()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Meu Computador

  tft.fillRoundRect(0, 70, 320, 35, 0, BLACK);
  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(15, 75);
  tft.println("Meu nobreak:");

  // Está ligando normalmente
  tft.fillRoundRect(20, 115, 278, 100, 10, RED);
  tft.fillRoundRect(23, 118, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(55, 155);
  tft.println("Nao Funciona");

  // Não liga e nem faz barulho
  tft.fillRoundRect(20, 235, 278, 100, 10, RED);
  tft.fillRoundRect(23, 238, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(85, 275);
  tft.println("Nao liga");

  // Liga mas não aparece a tela
  tft.fillRoundRect(20, 365, 278, 100, 10, RED);
  tft.fillRoundRect(23, 368, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(70, 390);
  tft.println("Manutencao");
  tft.setCursor(70, 420);
  tft.println("Preventiva");
}

// Efeito e função do clique dos botões
void btn_Nobreak(int caso)
{
  switch (caso)
  {

  // Está desligando
  case 1:
    tft.fillRoundRect(23, 118, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 155);
    tft.println("Nao Funciona");
    menu = "menu_NobreakDesliga";
    menu_NobreakDesliga();
    break;

  // Não liga
  case 2:
    tft.fillRoundRect(23, 238, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(85, 270);
    tft.println("Nao liga");
    menu = "menu_NobreakNaoLiga";
    menu_NobreakNaoLiga();
    break;

  // Manutencao Preventiva
  case 3:
    tft.fillRoundRect(23, 368, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(70, 390);
    tft.println("Manutencao");
    tft.setCursor(70, 420);
    tft.println("Preventiva");
    tela_Chamado(4);
    break;
  }
}
