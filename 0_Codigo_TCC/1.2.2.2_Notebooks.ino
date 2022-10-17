void menuNotebook()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Notebook 1
  showBMP("noteAsus.bmp", 15, 95);
  tft.fillRoundRect(137, 92, 167, 112, 0, RED);
  tft.fillRoundRect(140, 95, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(200, 100);
  tft.println("Asus");
  tft.setCursor(200, 120);
  tft.println("M515");
  tft.setCursor(180, 140);
  tft.println("Ryzen 5");
  tft.setCursor(170, 160);
  tft.println("8GB DDR4");
  tft.setCursor(160, 185);
  tft.println("R$2.999,99");

  // Notebook 2
  showBMP("NoteLenovo.bmp", 15, 220);
  tft.fillRoundRect(137, 217, 167, 112, 0, RED);
  tft.fillRoundRect(140, 220, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(185, 225);
  tft.println("Lenovo");
  tft.setCursor(175, 245);
  tft.println("Legion 5");
  tft.setCursor(180, 265);
  tft.println("Ryzen 7");
  tft.setCursor(165, 285);
  tft.println("16GB DDR4");
  tft.setCursor(160, 310);
  tft.println("R$6.999.99");

  // Notebook 3
  showBMP("NoteAlienware.bmp", 15, 345);
  tft.fillRoundRect(137, 342, 167, 112, 0, RED);
  tft.fillRoundRect(140, 345, 161, 106, 0, BLACK);
  tft.setTextSize(2);
  tft.setTextColor(WHITE);
  tft.setCursor(200, 350);
  tft.println("Dell");
  tft.setCursor(165, 370);
  tft.println("Alienware");
  tft.setCursor(145, 390);
  tft.println("Intel core i9");
  tft.setCursor(165, 410);
  tft.println("32 GB DDR4");
  tft.setCursor(160, 435);
  tft.println("R$11.999,99");
}
void btnNotebook(int caso)
{
  switch (caso)
  {
  // Notebook 1
  case 1:

    tft.fillRoundRect(140, 95, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(170, 100);
    tft.println("Multilaser");
    tft.setCursor(147, 120);
    tft.println("Classic MO300");
    tft.setCursor(180, 150);
    tft.println("Com Fio");
    tft.setCursor(180, 185);
    tft.println("R$10,90");
    nProduto = 13;
    telaCaixa(3);
    break;

  // Notebook 2
  case 2:
    tft.fillRoundRect(140, 220, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(175, 225);
    tft.println("Redragon");
    tft.setCursor(190, 245);
    tft.println("Cobra");
    tft.setCursor(180, 275);
    tft.println("Com Fio");
    tft.setCursor(175, 310);
    tft.println("R$119,90");
    nProduto = 14;
    telaCaixa(3);
    break;

  // Notebook 3
  case 3:

    tft.fillRoundRect(140, 345, 161, 106, 0, WHITE);
    tft.setTextSize(2);
    tft.setTextColor(BLACK);
    tft.setCursor(175, 351);
    tft.println("Logitech");
    tft.setCursor(175, 373);
    tft.println("G910 PRO");
    tft.setCursor(177, 402);
    tft.println("Sem Fio");
    tft.setCursor(175, 435);
    tft.println("R$799,99");
    nProduto = 15;
    telaCaixa(3);
    break;
  }
}
