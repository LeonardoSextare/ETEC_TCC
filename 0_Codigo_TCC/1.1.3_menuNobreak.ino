// Desenha os Botões e Escrita
void menuNobreak()
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
  tft.setCursor(75, 138);
  tft.println("Nao Segura");
  tft.setTextSize(2);
  tft.setCursor(30, 168);
  tft.println("Quedas de Energia");

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
void btnNobreak(int caso)
{
  switch (caso)
  {

  // Está ligando normalmente
  case 1:
    tft.fillRoundRect(23, 118, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(50, 138);
    tft.println("Nao Segura");
    tft.setCursor(90, 168);
    tft.println("Carga");
    break;

  // Não liga e nem faz barulho
  case 2:
    tft.fillRoundRect(23, 238, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(85, 270);
    tft.println("Nao liga");

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
    telaCaixa(4);
    break;
  }
}
