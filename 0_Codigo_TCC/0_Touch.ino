/* Codigo das Paginas
  1 = Menu Principal
  2 = Assistencia Tecnica
  3 = Computaodres e Notebooks
  4 = Impressoras
  5 = Produtos
  6 = Periféricos
  7 = Computadores e Notebooks
  8 = Cabos
*/

void Touch()
{
  // Menu Principal
  if (page == "menuPrincipal")
  {
    if (X < 264 && X > 15)
    {

      // Assistencia Tecnica
      if (Y > 65 && Y < 135)
      {
        btnPrincipal(1);
      }

      // Produtos
      if (Y > 150 && Y < 215)
      {
        btnPrincipal(2);
      }

      // Xerox
      if (Y > 230 && Y < 300)
      {
        btnPrincipal(3);
      }
    }
  }

  // Menu Assistencia
  else if (page == "menuAssistencia")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(1);
    }

    if (X < 264 && X > 20)
    {

      // Computadores e Notebooks
      if (Y > 65 && Y < 115)
      {
        btnAssistencia(1);
      }

      // Impressoras
      if (Y > 122 && Y < 175)
      {
        btnAssistencia(2);
      }

      // Nobreaks
      if (Y > 185 && Y < 235)
      {
        btnAssistencia(3);
      }

      // Outros Equipamentos
      if (Y > 245 && Y < 300)
      {
        btnAssistencia(4);
      }
    }
  }

  // Menu Produtos
  else if (page == "menuProdutos")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(1);
    }

    if (X < 264 && X > 20)
    {

      // Perifericos
      if (Y > 64 && Y < 112)
      {
        btnProdutos(1);
      }

      // Computadores e Notebooks
      if (Y > 123 && Y < 175)
      {
        btnProdutos(2);
      }

      // Cabos
      if (Y > 183 && Y < 237)
      {
        btnProdutos(3);
      }

      // Outros
      if (Y > 247 && Y < 300)
      {
        btnProdutos(4);
      }
    }
  }

  // Menu Periféricos
  else if (page == "menuPerifericos")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(5);
    }

    if (X < 264 && X > 20)
    {

      // Mouses
      if (Y > 64 && Y < 112)
      {
        btnPerifericos(1);
      }

      // Teclados
      if (Y > 123 && Y < 175)
      {
        btnPerifericos(2);
      }

      // Headphones
      if (Y > 183 && Y < 237)
      {
        btnPerifericos(3);
      }

      // Outros
      if (Y > 247 && Y < 300)
      {
        btnPerifericos(4);
      }
    }
  }

  // Menu Computadores e Notebooks
  else if (page == "menuVendaPC")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(5);
    }

    if (X < 260 && X > 20)
    {

      // Desktop
      if (Y > 64 && Y < 140)
      {
        btnVendaPC(1);
      }

      // Notebooks
      if (Y > 148 && Y < 220)
      {
        btnVendaPC(2);
      }

      // Monte seu Pc
      if (Y > 235 && Y < 300)
      {
        btnVendaPC(3);
      }
    }
  }

  // Menu Computadores e Notebooks
  else if (page == "menuMouse")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(6);
    }

    if (X < 260 && X > 20)
    {

      // Desktop
      if (Y > 64 && Y < 140)
      {
        btnMouse(1);
      }

      // Notebooks
      if (Y > 148 && Y < 220)
      {
        btnMouse(2);
      }

      // Monte seu Pc
      if (Y > 235 && Y < 300)
      {
        btnMouse(3);
      }
    }
  }

  // Menu Venda Cabos
  else if (page == "menuVendaCabo")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(8);
    }

    if (X < 274 && X > 16)
    {

      // Mouse 1
      if (Y > 64 && Y < 136)
      {
        btnVendaCabo(1);
      }

      // Mouse 2
      if (Y > 151 && Y < 220)
      {
        btnVendaCabo(2);
      }

      // Mouse 3
      if (Y > 230 && Y < 306)
      {
        btnVendaCabo(3);
      }
    }
  }

  // Adaptadores
  else if (page == "menuAdaptadores")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(8);
    }

    if (X < 260 && X > 20)
    {

      // Adaptador 1
      if (Y > 64 && Y < 140)
      {
        btnAdaptadores(1);
      }

      // Adaptador 2
      if (Y > 148 && Y < 220)
      {
        btnAdaptadores(2);
      }

      // Adaptador 3
      if (Y > 235 && Y < 300)
      {
        btnAdaptadores(3);
      }
    }
  }

  // Menu Cabos
  else if (page == "menuCabo")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(5);
    }

    if (X < 274 && X > 16)
    {

      // Mouse 1
      if (Y > 64 && Y < 136)
      {
        btnCabo(1);
      }

      // Mouse 2
      if (Y > 151 && Y < 220)
      {
        btnCabo(2);
      }

      // Mouse 3
      if (Y > 230 && Y < 306)
      {
        btnCabo(3);
      }
    }
  }

  // Menu Computadores
  else if (page == "menuComputadores")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(7);
    }

    if (X < 274 && X > 16)
    {

      // PC 1
      if (Y > 64 && Y < 136)
      {
        btnComputadores(1);
      }

      // PC 2
      if (Y > 151 && Y < 220)
      {
        btnComputadores(2);
      }

      // PC 3
      if (Y > 230 && Y < 306)
      {
        btnComputadores(3);
      }
    }
  }

  // Menu Notebooks
  else if (page == "menuNotebook")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(7);
    }

    if (X < 274 && X > 16)
    {

      // PC 1
      if (Y > 64 && Y < 136)
      {
        btnNotebook(1);
      }

      // PC 2
      if (Y > 151 && Y < 220)
      {
        btnNotebook(2);
      }

      // PC 3
      if (Y > 230 && Y < 306)
      {
        btnNotebook(3);
      }
    }
  }

  // Menu Teclado
  else if (page == "menuTeclado")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(6);
    }

    if (X < 274 && X > 16)
    {

      // Mouse 1
      if (Y > 64 && Y < 136)
      {
        btnTeclado(1);
      }

      // Mouse 2
      if (Y > 151 && Y < 220)
      {
        btnTeclado(2);
      }

      // Mouse 3
      if (Y > 230 && Y < 306)
      {
        btnTeclado(3);
      }
    }
  }

  // Menu Headphones
  else if (page == "menuFone")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(6);
    }

    if (X < 274 && X > 16)
    {

      // Mouse 1
      if (Y > 64 && Y < 136)
      {
        btnFone(1);
      }

      // Mouse 2
      if (Y > 151 && Y < 220)
      {
        btnFone(2);
      }

      // Mouse 3
      if (Y > 230 && Y < 306)
      {
        btnFone(3);
      }
    }
  }

  // Menu Xerox
  else if (page == "menuXerox")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(1);
    }

    if (X < 264 && X > 20)
    {

      // Documentos
      if (Y > 64 && Y < 112)
      {
        btnXerox(1);
      }

      // Boletos
      if (Y > 123 && Y < 175)
      {
        btnXerox(2);
      }

      // Fotos
      if (Y > 183 && Y < 237)
      {
        btnXerox(3);
      }

      // Outros
      if (Y > 247 && Y < 300)
      {
        btnXerox(4);
      }
    }
  }

  // Menu PC
  else if (page == "menuPC")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(2);
    }

    if (X < 264 && X > 20)
    {
      // Está ligando normalmente
      if (Y > 75 && Y < 142)
      {
        btnPC(1);
      }

      // Não liga e nem faz barulho
      if (Y > 160 && Y < 225)
      {
        btnPC(2);
      }

      // Liga mas não aparece a tela
      if (Y > 247 && Y < 311)
      {
        btnPC(3);
      }
    }
  }

  // Menu PC Liga
  else if (page == "menuPcLiga")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(3);
    }

    // Solicitar Assistencia
    if ((X < 260 && X > 20) & (Y > 262 && Y < 310))
    {
      btnPcLiga(7);
    }

    // X Sim
    if (X < 270 && X > 146)
    {
      // Sim 1
      if (Y > 75 && Y < 110)
      {
        btnPcLiga(1);
      }

      // Sim 2
      if (Y > 144 && Y < 180)
      {
        btnPcLiga(3);
      }

      // Sim 3
      if (Y > 215 && Y < 251)
      {
        btnPcLiga(5);
      }
    }

    // X Não
    if (X < 134 && X > 0)
    {
      // Não 1
      if (Y > 75 && Y < 110)
      {
        btnPcLiga(2);
      }

      // Não 2
      if (Y > 144 && Y < 180)
      {
        btnPcLiga(4);
      }

      // Não 3
      if (Y > 215 && Y < 251)
      {
        btnPcLiga(6);
      }
    }
  }

  // Menu PC Liga TEla
  else if (page == "menuPcLigaTela")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(3);
      ;
    }

    // Solicitar Assistencia
    if ((X < 260 && X > 20) & (Y > 262 && Y < 310))
    {
      btnPcLigaTela(7);
    }

    // X Sim
    if (X < 270 && X > 146)
    {
      // Sim 1
      if (Y > 75 && Y < 110)
      {
        btnPcLigaTela(1);
      }

      // Sim 2
      if (Y > 144 && Y < 180)
      {
        btnPcLigaTela(3);
      }

      // Sim 3
      if (Y > 215 && Y < 251)
      {
        btnPcLigaTela(5);
      }
    }

    // X Não
    if (X < 134 && X > 0)
    {
      // Não 1
      if (Y > 75 && Y < 110)
      {
        btnPcLigaTela(2);
      }

      // Não 2
      if (Y > 144 && Y < 180)
      {
        btnPcLigaTela(4);
      }

      // Não 3
      if (Y > 215 && Y < 251)
      {
        btnPcLigaTela(6);
      }
    }
  }

  // Menu PC Liga
  else if (page == "menuPcLigaBarulho")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(3);
    }

    // Solicitar Assistencia
    if ((X < 260 && X > 20) & (Y > 262 && Y < 310))
    {
      btnPcLigaTela(7);
    }

    // X Sim
    if (X < 270 && X > 146)
    {
      // Sim 1
      if (Y > 75 && Y < 110)
      {
        btnPcLigaBarulho(1);
      }

      // Sim 2
      if (Y > 144 && Y < 180)
      {
        btnPcLigaBarulho(3);
      }

      // Sim 3
      if (Y > 215 && Y < 251)
      {
        btnPcLigaBarulho(5);
      }
    }

    // X Não
    if (X < 134 && X > 0)
    {
      // Não 1
      if (Y > 75 && Y < 110)
      {
        btnPcLigaBarulho(2);
      }

      // Não 2
      if (Y > 144 && Y < 180)
      {
        btnPcLigaBarulho(4);
      }

      // Não 3
      if (Y > 215 && Y < 251)
      {
        btnPcLigaBarulho(6);
      }
    }
  }

  // Menu Impressora
  else if (page == "menuImpressora")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(2);
    }

    if (X < 264 && X > 20)
    {
      // Está ligando normalmente
      if (Y > 75 && Y < 142)
      {
        btnImpressora(1);
      }

      // Não liga e nem faz barulho
      if (Y > 160 && Y < 225)
      {
        btnImpressora(2);
      }

      // Liga mas não aparece a tela
      if (Y > 247 && Y < 311)
      {
        btnImpressora(3);
      }
    }
  }

  // Menu Impressora Liga
  else if (page == "menuImpressoraLiga")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(4);
    }

    // Solicitar Assistencia
    if ((X < 260 && X > 20) & (Y > 262 && Y < 310))
    {
      btnImpressoraLiga(7);
    }

    // X Sim
    if (X < 270 && X > 146)
    {
      // Sim 1
      if (Y > 75 && Y < 110)
      {
        btnImpressoraLiga(1);
      }

      // Sim 2
      if (Y > 144 && Y < 180)
      {
        btnImpressoraLiga(3);
      }

      // Sim 3
      if (Y > 215 && Y < 251)
      {
        btnImpressoraLiga(5);
      }
    }

    // X Não
    if (X < 134 && X > 0)
    {
      // Não 1
      if (Y > 75 && Y < 110)
      {
        btnImpressoraLiga(2);
      }

      // Não 2
      if (Y > 144 && Y < 180)
      {
        btnImpressoraLiga(4);
      }

      // Não 3
      if (Y > 215 && Y < 251)
      {
        btnImpressoraLiga(6);
      }
    }
  }

  // Menu Impressora não Liga
  else if (page == "menuImpressoraNLiga")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(4);
    }

    // Solicitar Assistencia
    if ((X < 260 && X > 20) & (Y > 262 && Y < 310))
    {
      btnImpressoraNLiga(7);
    }

    // X Sim
    if (X < 270 && X > 146)
    {
      // Sim 1
      if (Y > 75 && Y < 110)
      {
        btnImpressoraNLiga(1);
      }

      // Sim 2
      if (Y > 144 && Y < 180)
      {
        btnImpressoraNLiga(3);
      }

      // Sim 3
      if (Y > 215 && Y < 251)
      {
        btnImpressoraNLiga(5);
      }
    }

    // X Não
    if (X < 134 && X > 0)
    {
      // Não 1
      if (Y > 75 && Y < 110)
      {
        btnImpressoraNLiga(2);
      }

      // Não 2
      if (Y > 144 && Y < 180)
      {
        btnImpressoraNLiga(4);
      }

      // Não 3
      if (Y > 215 && Y < 251)
      {
        btnImpressoraNLiga(6);
      }
    }
  }

  // Menu Nobreak
  else if (page == "menuNobreak")
  {

    // Botão Voltar
    if ((X < 270 && X > 240) & (Y > 7 && Y < 40))
    {
      btnVoltar(2);
    }

    if (X < 264 && X > 20)
    {
      // Está ligando normalmente
      if (Y > 75 && Y < 142)
      {
        btnNobreak(1);
      }

      // Não liga e nem faz barulho
      if (Y > 160 && Y < 225)
      {
        btnNobreak(2);
      }

      // Liga mas não aparece a tela
      if (Y > 247 && Y < 311)
      {
        btnNobreak(3);
      }
    }
  }
}
// Funções do Botão Voltar
void btnVoltar(int pagina)
{
  switch (pagina)
  {

  case 0:
    tft.fillTriangle(10, 35, 50, 15, 50, 55, BLACK);
    tft.fillTriangle(15, 35, 47, 19, 47, 51, WHITE);
    break;

  case 1:
    menuPrincipal();
    page = "menuPrincipal";
    break;

  case 2:
    menuAssistencia();
    page = "menuAssistencia";

    break;

  case 3:
    menuPC();
    page = "menuPC";
    break;

  case 4:
    menuImpressora();
    page = "menuImpressora";
    break;

  case 5:
    menuProdutos();
    page = "menuProdutos";
    break;

  case 6:
    menuPerifericos();
    page = "menuPerifericos";
    break;

  case 7:
    menuVendaPC();
    page = "menuVendaPC";
    break;

  case 8:
    menuCabo();
    page = "menuCabo";
    break;
  }
}
