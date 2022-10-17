/*Variveis
produto = Nome Produto escolhido

equipamento = Tipo do equipamento
funcionamento = Estado de funcionando do equipamento selecionado
====Troubleshotting Está ligando=====
windows = Inicia ou nao o windows
lentidao = autoexplicativo
desligando = autoexplicativo

====Troubleshotting Está ligando=====
*/

void telaCaixa(int atendimento) {
  
  tft.fillRoundRect(10, 15, 41, 41, 0, BLUE);
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);



  if (atendimento == 1) {
    // Redirecionar para o Caixa 1
    tft.setTextSize(4);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 90);
    tft.println("Por favor");
    tft.setCursor(5, 120);
    tft.println("Prossiga para");
    tft.setCursor(65, 150);
    tft.println("Balcao 01");

    delay(10000);
    menuPrincipal();
    page = "menuPrincipal";
  }

  else if (atendimento == 2) {
    // Redirecionar para o Balcão
    tft.setTextSize(4);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 210);
    tft.println("Por favor");
    tft.setCursor(5, 250);
    tft.println("Prossiga para");
    tft.setCursor(65, 300);
    tft.println("Balcao 02");
    delay(10000);
    page = "menuPrincipal";
    menuPrincipal();
  }

  else if (atendimento == 3) {
    // Chamando um Atendente
    tft.setTextSize(4);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 90);
    tft.println("Aguarde...");
    tft.setCursor(5, 120);
    tft.println("Solicitando");
    tft.setCursor(65, 150);
    tft.println("Atendente");
    tft.setCursor(10, 350);
    tft.setTextSize(2);
    tft.println(produto[nProduto]);
    delay(10000);
    page = "menuPrincipal";
    menuPrincipal();
  }

  else if (atendimento == 4) {
    // Chamando um Técnico
    tft.setTextSize(4);
    tft.setTextColor(BLACK);
    tft.setCursor(55, 90);
    tft.println("Aguarde...");
    tft.setCursor(5, 120);
    tft.println("Solicitando");
    tft.setCursor(65, 150);
    tft.println("Tecnico");
    
    tft.setTextSize(2);
    tft.setCursor(65, 200);
    tft.println(equipamento);
    tft.setCursor(65, 220);
    tft.println(funcionamento);
    delay(10000);
    page = "menuPrincipal";
    menuPrincipal();
  }


  nProduto = 0;
  equipamento = "";
  funcionamento = "";
  windows = "";
  desligando = "";


}
