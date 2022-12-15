void tela_Chamado(int atendimento) {
  
  tft.fillRoundRect(10, 15, 41, 41, 0, BLUE);
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);



  if (atendimento == 1) {
    // Redirecionar para o Balcão 1
    tft.setTextSize(4);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 90);
    tft.println("Por favor");
    tft.setCursor(5, 130);
    tft.println("Prossiga para");
    tft.setCursor(65, 170);
    tft.println("Balcao 01");

    playerMP3.playFolder(1, 15);

    delay(10000);
    chegada = 2;
    menu = "menu_Index";
  }

  else if (atendimento == 2) {
    // Redirecionar para o Balcão 2
    tft.setTextSize(4);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 90);
    tft.println("Por favor");
    tft.setCursor(5, 130);
    tft.println("Prossiga para");
    tft.setCursor(65, 170);
    tft.println("Balcao 02");

    playerMP3.playFolder(1, 16);

    delay(10000);
    menu = "menu_Index";
    chegada = 2;
  }

  else if (atendimento == 3) {
    // Chamando um Atendente
    tft.setTextSize(4);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 90);
    tft.println("Aguarde...");
    tft.setCursor(25, 130);
    tft.println("Solicitando");
    tft.setCursor(45, 170);
    tft.println("Atendente");

    playerMP3.playFolder(1, 17);
  
    delay(10000);
    chegada = 2;
    menu = "menu_Index";
  }

  else if (atendimento == 4) {
    // Chamando um Técnico
    tft.setTextSize(4);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 90);
    tft.println("Aguarde...");
    tft.setCursor(25, 130);
    tft.println("Solicitando");
    tft.setCursor(60, 170);
    tft.println("Tecnico");

    playerMP3.playFolder(1,14);
  
    delay(10000);
    chegada = 2;
    menu = "menu_Index";
  }

  else if (atendimento == 5) {
    // Chamando um Técnico
    tft.setTextSize(4);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 90);
    tft.println("Obrigado");
    tft.setCursor(18, 140);
    tft.println("Volte Sempre");
    menu = "menu_Index";
  }
}
