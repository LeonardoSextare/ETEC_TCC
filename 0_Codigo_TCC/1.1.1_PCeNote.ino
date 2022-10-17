// Desenha os Botões e Escrita
void menuPC()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Meu Computador

  tft.fillRoundRect(0, 70, 320, 35, 0, BLACK);
  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(20, 75);
  tft.println("Meu computador:");

  // Está ligando normalmente
  tft.fillRoundRect(20, 115, 278, 100, 10, RED);
  tft.fillRoundRect(23, 118, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(50, 138);
  tft.println("Esta Ligando");
  tft.setCursor(62, 168);
  tft.println("Normalmente");

  // Não liga e nem faz barulho
  tft.fillRoundRect(20, 235, 278, 100, 10, RED);
  tft.fillRoundRect(23, 238, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(55, 255);
  tft.println("Liga mas nao");
  tft.setCursor(36, 285);
  tft.println("Aparece a Tela");

  // Liga mas não aparece a tela
  tft.fillRoundRect(20, 365, 278, 100, 10, RED);
  tft.fillRoundRect(23, 368, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(55, 380);
  tft.println("Nao Liga nem");
  tft.setCursor(65, 410);
  tft.println("Faz barulho");
}

// Efeito e função do clique dos botões
void btnPC(int caso)
{
  switch (caso)
  {

  // Está ligando normalmente
  case 1:
    tft.fillRoundRect(23, 118, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(50, 138);
    tft.println("Esta Ligando");
    tft.setCursor(62, 168);
    tft.println("Normalmente");
    menuPcLiga();
    page = "menuPcLiga";
    funcionamento = "Esta Funcionando";
    break;

  // Não liga e nem faz barulho
  case 2:
    tft.fillRoundRect(23, 238, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 255);
    tft.println("Liga mas nao");
    tft.setCursor(36, 285);
    tft.println("Aparece a Tela");
    page = "menuPcLigaTela";
    menuPcLigaTela();
    funcionamento = "Liga, mas nao aparece a tela";

    break;

  // Liga mas não aparece a tela
  case 3:
    tft.fillRoundRect(23, 368, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 380);
    tft.println("Nao liga nem");
    tft.setCursor(65, 410);
    tft.println("Faz barulho");
    menuPcLigaBarulho();
    page = "menuPcLigaBarulho";
    funcionamento = "Nao liga, nem faz barulho";
    break;
  }
}
