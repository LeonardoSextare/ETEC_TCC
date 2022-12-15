// Desenha os Botões e Escrita
void menu_Impressora()
{
  tft.fillRoundRect(0, 71, 320, 410, 0, WHITE);

  // Meu Computador

  tft.fillRoundRect(0, 70, 320, 35, 0, BLACK);
  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(5, 75);
  tft.println("Minha impressora:");

  // Está ligando normalmente
  tft.fillRoundRect(20, 115, 278, 100, 10, RED);
  tft.fillRoundRect(23, 118, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(50, 138);
  tft.println("Liga mas nao");
  tft.setCursor(90, 168);
  tft.println("Imprime");

  // Não liga e nem faz barulho
  tft.fillRoundRect(20, 235, 278, 100, 10, RED);
  tft.fillRoundRect(23, 238, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(85, 270);
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
void btn_Impressora(int caso)
{
  switch (caso)
  {

  // Está ligando normalmente
  case 1:
    tft.fillRoundRect(23, 118, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(50, 138);
    tft.println("Liga mas nao");
    tft.setCursor(90, 168);
    tft.println("Imprime");
    menu = "menu_ImpressoraLiga";
    menu_ImpressoraLiga();
    break;

  // Não liga e nem faz barulho
  case 2:
    tft.fillRoundRect(23, 238, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(85, 270);
    tft.println("Nao liga");
    menu = "menu_ImpressoraNLiga";
    menu_ImpressoraNLiga();

    break;

  // Liga mas não aparece a tela
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
