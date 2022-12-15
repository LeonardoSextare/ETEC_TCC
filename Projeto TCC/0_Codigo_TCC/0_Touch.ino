// Reseta Parametros do Touch
void resetXY()
{
    X = 1000;
    Y = 1000;
}

// Funções do Botão Voltar
void btnVoltar(int caso)
{
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

    if (caso > 0)
        Serial.println("Click: Voltar");

    switch (caso)
    {
    // Desenha o Botão de Voltar
    case 0:

        tft.fillTriangle(10, 35, 50, 15, 50, 55, BLACK);
        tft.fillTriangle(15, 35, 47, 19, 47, 51, WHITE);
        break;

    case 1:
        menu_Index();
        menu = "menu_Index";
        break;

    case 2:
        menu_Assistencia();
        menu = "menu_Assistencia";

        break;

    case 3:
        menu_AssistenciaPC();
        menu = "menu_AssistenciaPC";
        break;

    case 4:
        menu_Impressora();
        menu = "menu_Impressora";
        break;

    case 5:
        menu_Produtos();
        menu = "menu_Produtos";
        break;

    case 6:
        menu_Perifericos();
        menu = "menu_Perifericos";
        break;

    case 7:
        menu_VendaPC();
        menu = "menu_VendaPC";
        break;

    case 8:
        menu_ListaCabo();
        menu = "menu_ListaCabo";
        break;

    case 9:
        menu_Nobreak();
        menu = "menu_Nobreak";
        break;
    }
}

// Verifica as cordenadas do toque e chama a função correspondende ao menu
void Touch()
{

    // Menu Principal
    if (menu == "menu_Index")
    {
        if (X > 10 && X < 300)
        {
            // Assistencia Tecnica
            if (Y > 85 && Y < 190)
            {
                resetXY();
                Serial.println("Click: Assistencia Tecnica");
                btn_Index(1);
            }

            // Produtos
            if (Y > 214 && Y < 315)
            {
                resetXY();
                Serial.println("Click: Produtos");
                btn_Index(2);
            }

            // Impressão
            if (Y > 343 && Y < 450)
            {
                resetXY();
                Serial.println("Click: Impressao");
                btn_Index(3);
            }
        }
    }

    // Menu Assistencia Tecnica
    if (menu == "menu_Assistencia")
    {
        // Botão	Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(1);
        }
        if (X > 10 && X < 300)
        {
            // Computadores e Notebooks
            if (Y > 85 && Y < 171)
            {
                resetXY();
                Serial.println("Click: Computadores e Notebooks");
                btn_Assistencia(1);
            }

            // Impressoras
            if (Y > 180 && Y < 250)
            {
                resetXY();
                Serial.println("Click: Impressoras");
                btn_Assistencia(2);
            }

            // Nobreaks
            if (Y > 265 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Nobreaks");
                btn_Assistencia(3);
            }

            // Outros Equipamentos
            if (Y > 368 && Y < 448)
            {
                resetXY();
                Serial.println("Click: Outros Equipamentos");
                btn_Assistencia(4);
            }
        }
    }

    // Menu Produtos
    else if (menu == "menu_Produtos")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(1);
        }

        if (X > 10 && X < 300)
        {

            // Perifericos
            if (Y > 75 && Y < 156)
            {
                resetXY();
                Serial.println("Click: Periféricos");
                btn_Produtos(1);
            }

            // Computadores e Notebooks
            if (Y > 170 && Y < 255)
            {
                resetXY();
                Serial.println("Click: Computadores e Notebooks");
                btn_Produtos(2);
            }

            // Cabos
            if (Y > 270 && Y < 350)
            {
                resetXY();
                Serial.println("Click: Cabos");
                btn_Produtos(3);
            }

            // Outros
            if (Y > 360 && Y < 430)
            {
                resetXY();
                Serial.println("Click: Outros");
                btn_Produtos(4);
            }
        }
    }

    // Menu Periféricos
    else if (menu == "menu_Perifericos")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(5);
        }

        if (X > 10 && X < 300)
        {

            // Mouses
            if (Y > 78 && Y < 160)
            {
                resetXY();
                Serial.println("Click: Mouses");
                btn_Perifericos(1);
            }

            // Teclados
            if (Y > 175 && Y < 250)
            {
                resetXY();
                Serial.println("Click: Teclados");
                btn_Perifericos(2);
            }

            // Headphones
            if (Y > 270 && Y < 350)
            {
                resetXY();
                Serial.println("Click: Headphones");
                btn_Perifericos(3);
            }

            // Outros
            if (Y > 365 && Y < 445)
            {
                resetXY();
                Serial.println("Click: Outros");
                btn_Perifericos(4);
            }
        }
    }

    // Menu Computadores e Notebooks
    else if (menu == "menu_VendaPC")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(5);
        }

        if (X > 10 && X < 300)
        {

            // Computadores
            if (Y > 78 && Y < 160)
            {
                resetXY();
                Serial.println("Click: Computadores");
                btn_VendaPC(1);
            }

            // Notebooks
            if (Y > 175 && Y < 250)
            {
                resetXY();
                Serial.println("Click: Notebooks");
                btn_VendaPC(2);
            }

            // Monte seu computador
            if (Y > 270 && Y < 350)
            {
                resetXY();
                Serial.println("Click: Monte seu Computador");
                btn_VendaPC(3);
            }
        }
    }

    // Menu Computadores e Notebooks
    else if (menu == "menu_Mouse")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(6);
        }

        if (X > 147 && X < 305)
        {

            // Mouse 1
            if (Y > 71 && Y < 190)
            {
                resetXY();
                Serial.println("Click: Mouse 1");
                btn_Mouse(1);
            }

            // Mouse 2
            if (Y > 200 && Y < 325)
            {
                resetXY();
                Serial.println("Click: Mouse 2");
                btn_Mouse(2);
            }

            // Mouse 3
            if (Y > 340 && Y < 450)
            {
                resetXY();
                Serial.println("Click: Mouse 3");
                btn_Mouse(3);
            }
        }
    }

    // Menu Venda Cabos
    else if (menu == "menu_VendaCabo")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(8);
        }

        if (X > 147 && X < 305)
        {

            // Cabo 1
            if (Y > 71 && Y < 190)
            {
                resetXY();
                Serial.println("Click: Cabo 1");
                btn_VendaCabo(1);
            }

            // Cabo 2
            if (Y > 200 && Y < 325)
            {
                resetXY();
                Serial.println("Click: Cabo 2");
                btn_VendaCabo(2);
            }

            // Cabo 3
            if (Y > 340 && Y < 450)
            {
                resetXY();
                Serial.println("Click: Cabo 3");
                btn_VendaCabo(3);
            }
        }
    }

    // Adaptadores
    else if (menu == "menu_VendaAdaptador")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(8);
        }

        if (X > 147 && X < 305)
        {

            // Adaptador 1
            if (Y > 71 && Y < 190)
            {
                resetXY();
                Serial.println("Click: Adaptador 1");
                btn_VendaAdaptador(1);
            }

            // Adaptador 2
            if (Y > 200 && Y < 325)
            {
                resetXY();
                Serial.println("Click: Adaptador 2");
                btn_VendaAdaptador(2);
            }

            // Adaptador 3
            if (Y > 340 && Y < 450)
            {
                resetXY();
                Serial.println("Click: Adaptador 3");
                btn_VendaAdaptador(3);
            }
        }
    }

    // Menu Cabos
    else if (menu == "menu_ListaCabo")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(5);
        }

        if (X > 10 && X < 300)
        {

            // Cabos
            if (Y > 82 && Y < 190)
            {
                resetXY();
                Serial.println("Click: Cabos");
                btn_ListaCabo(1);
            }

            // Adaptadores
            if (Y > 214 && Y < 316)
            {
                resetXY();
                Serial.println("Click: Adaptadores");
                btn_ListaCabo(2);
            }

            // Outros
            if (Y > 338 && Y < 443)
            {
                resetXY();
                Serial.println("Click: Outros");
                btn_ListaCabo(3);
            }
        }
    }

    // Menu Computadores
    else if (menu == "menu_VendaComputadores")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(7);
        }

        if (X > 147 && X < 305)
        {

            // Computador 1
            if (Y > 71 && Y < 190)
            {
                resetXY();
                Serial.println("Click: Computador 1");
                btn_VendaComputadores(1);
            }

            // Computador 2
            if (Y > 200 && Y < 325)
            {
                resetXY();
                Serial.println("Click: Computador 2");
                btn_VendaComputadores(2);
            }

            // Computador 3
            if (Y > 340 && Y < 450)
            {
                resetXY();
                Serial.println("Click: Computador 3");
                btn_VendaComputadores(3);
            }
        }
    }

    // Menu Notebooks
    else if (menu == "menu_VendaNotebook")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(7);
        }

        if (X > 147 && X < 305)
        {

            // Notebook 1
            if (Y > 71 && Y < 190)
            {
                resetXY();
                Serial.println("Click: Notebook 1");
                btn_VendaNotebook(1);
            }

            // Notebook 2
            if (Y > 200 && Y < 325)
            {
                resetXY();
                Serial.println("Click: Notebook 2");
                btn_VendaNotebook(2);
            }

            // Notebook 3
            if (Y > 340 && Y < 450)
            {
                resetXY();
                Serial.println("Click: Notebook 3");
                btn_VendaNotebook(3);
            }
        }
    }

    // Menu Teclado
    else if (menu == "menu_Teclado")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(6);
        }

        if (X > 147 && X < 305)
        {

            // Teclado 1
            if (Y > 71 && Y < 190)
            {
                resetXY();
                Serial.println("Click: Teclado 1");
                btn_Teclado(1);
            }

            // Teclado 2
            if (Y > 200 && Y < 325)
            {
                resetXY();
                Serial.println("Click: Teclado 2");
                btn_Teclado(2);
            }

            // Teclado 3
            if (Y > 340 && Y < 450)
            {
                resetXY();
                Serial.println("Click: Teclado 3");
                btn_Teclado(3);
            }
        }
    }

    // Menu Headphones
    else if (menu == "menu_Headset")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(6);
        }

        if (X > 147 && X < 305)
        {

            // Headset 1
            if (Y > 71 && Y < 190)
            {
                resetXY();
                Serial.println("Click: Headset 1");
                btn_Headset(1);
            }

            // Headset 2
            if (Y > 200 && Y < 325)
            {
                resetXY();
                Serial.println("Click: Headset 2");
                btn_Headset(2);
            }

            // Headset 3
            if (Y > 340 && Y < 450)
            {
                resetXY();
                Serial.println("Click: Headset 3");
                btn_Headset(3);
            }
        }
    }

    // Menu Impressao
    else if (menu == "menu_Impressao")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(1);
        }

        if (X < 264 && X > 20)
        {

            // Documentos
            if (Y > 74 && Y < 152)
            {
                resetXY();
                Serial.println("Click: Documentos");
                btn_Impressao(1);
            }

            // Boletos
            if (Y > 170 && Y < 255)
            {
                resetXY();
                Serial.println("Click: Boletos");
                btn_Impressao(2);
            }

            // Fotos
            if (Y > 260 && Y < 347)
            {
                resetXY();
                Serial.println("Click: Fotos");
                btn_Impressao(3);
            }

            // Outros
            if (Y > 366 && Y < 440)
            {
                resetXY();
                Serial.println("Click: Outros");
                btn_Impressao(4);
            }
        }
    }

    // Menu PC
    else if (menu == "menu_AssistenciaPC")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(2);
        }

        if (X > 10 && X < 300)
        {
            // Está ligando normalmente
            if (Y > 100 && Y < 200)
            {
                resetXY();
                Serial.println("Click: Esta ligando Normalmente");
                btn_assistenciaPC(1);
            }

            // Não liga e nem faz barulho
            if (Y > 224 && Y < 327)
            {
                resetXY();
                Serial.println("Click: Não liga e nem faz barulho");
                btn_assistenciaPC(2);
            }

            // Liga mas não aparece a tela
            if (Y > 362 && Y < 466)
            {
                resetXY();
                Serial.println("Click: Liga mas não aparece a tela");
                btn_assistenciaPC(3);
            }
        }
    }

    // Menu PC Liga
    else if (menu == "menu_PcFunciona")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(3);
        }

        // Solicitar Assistencia
        if ((X > 10 && X < 300) & (Y > 384 && Y < 463))
        {
            resetXY();
            Serial.println("Click: Solicitar Assistencia");
            btn_PcFunciona(7);
        }

        // Sim e Não
        if (X > -3 && X < 153)
        {
            // Sim 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_PcFunciona(1);
            }

            // Sim 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_PcFunciona(3);
            }

            // Sim 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_PcFunciona(5);
            }
        }

        // X Não
        if (X > 160 && X < 312)
        {
            // Não 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_PcFunciona(2);
            }

            // Não 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_PcFunciona(4);
            }

            // Não 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_PcFunciona(6);
            }
        }
    }

    // Menu PC Liga TEla
    else if (menu == "menu_PcLigando")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(3);
        }

        // Solicitar Assistencia
        if ((X > 10 && X < 300) & (Y > 384 && Y < 463))
        {
            resetXY();
            Serial.println("Click: Solicitar Assistencia");
            btn_PcLigando(7);
        }

        // Sim e Não
        if (X > -3 && X < 153)
        {
            // Sim 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_PcLigando(1);
            }

            // Sim 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_PcLigando(3);
            }

            // Sim 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_PcLigando(5);
            }
        }

        // X Não
        if (X > 160 && X < 312)
        {
            // Não 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_PcLigando(2);
            }

            // Não 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_PcLigando(4);
            }

            // Não 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_PcLigando(6);
            }
        }
    }

    // Menu PC Liga
    else if (menu == "menu_PcNaoLigaBarulho")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(3);
        }

        // Solicitar Assistencia
        if ((X > 10 && X < 300) & (Y > 384 && Y < 463))
        {
            resetXY();
            Serial.println("Click: Solicitar Assistencia");
            btn_PcNaoLigaBarulho(7);
        }

        // Sim e Não
        if (X > -3 && X < 153)
        {
            // Sim 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_PcNaoLigaBarulho(1);
            }

            // Sim 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_PcNaoLigaBarulho(3);
            }

            // Sim 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_PcNaoLigaBarulho(5);
            }
        }

        // X Não
        if (X > 160 && X < 312)
        {
            // Não 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_PcNaoLigaBarulho(2);
            }

            // Não 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_PcNaoLigaBarulho(4);
            }

            // Não 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_PcNaoLigaBarulho(6);
            }
        }
    }

    // Menu Impressora
    else if (menu == "menu_Impressora")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(2);
        }

        if (X > 10 && X < 300)
        {
            // Liga mais não imprime
            if (Y > 97 && Y < 197)
            {
                resetXY();
                Serial.println("Click: Liga mais não imprime");
                btn_Impressora(1);
            }

            // Não liga
            if (Y > 225 && Y < 325)
            {
                resetXY();
                Serial.println("Click: Não liga");
                btn_Impressora(2);
            }

            // Manutenção Preventiva
            if (Y > 363 && Y < 463)
            {
                resetXY();
                Serial.println("Click: Manutenção Preventiva");
                btn_Impressora(3);
            }
        }
    }

    // Menu Impressora Liga
    else if (menu == "menu_ImpressoraLiga")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(4);
        }

        // Solicitar Assistencia
        if ((X > 10 && X < 300) & (Y > 384 && Y < 463))
        {
            resetXY();
            Serial.println("Click: Solicitar Assistencia");
            btn_ImpressoraLiga(7);
        }

        // Sim e Não
        if (X > -3 && X < 153)
        {
            // Sim 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_ImpressoraLiga(1);
            }

            // Sim 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_ImpressoraLiga(3);
            }

            // Sim 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_ImpressoraLiga(5);
            }
        }

        // X Não
        if (X > 160 && X < 312)
        {
            // Não 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_ImpressoraLiga(2);
            }

            // Não 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_ImpressoraLiga(4);
            }

            // Não 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_ImpressoraLiga(6);
            }
        }
    }

    // Menu Impressora não Liga
    else if (menu == "menu_ImpressoraNLiga")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(4);
        }

        // Solicitar Assistencia
        if ((X > 10 && X < 300) & (Y > 384 && Y < 463))
        {
            resetXY();
            Serial.println("Click: Solicitar Assistencia");
            btn_ImpressoraNLiga(7);
        }

        // Sim e Não
        if (X > -3 && X < 153)
        {
            // Sim 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_ImpressoraNLiga(1);
            }

            // Sim 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_ImpressoraNLiga(3);
            }

            // Sim 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_ImpressoraNLiga(5);
            }
        }

        // X Não
        if (X > 160 && X < 312)
        {
            // Não 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_ImpressoraNLiga(2);
            }

            // Não 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_ImpressoraNLiga(4);
            }

            // Não 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_ImpressoraNLiga(6);
            }
        }
    }

    // Menu Nobreak
    else if (menu == "menu_Nobreak")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(2);
        }

        if (X > 10 && X < 300)
        {
            //  Não segura carga
            if (Y > 100 && Y < 200)
            {
                resetXY();
                Serial.println("Click: Não segura carga");
                btn_Nobreak(1);
            }

            // Não Liga
            if (Y > 225 && Y < 328)
            {
                resetXY();
                Serial.println("Click: Não Liga");
                btn_Nobreak(2);
            }

            // Manutenção Preventiva
            if (Y > 364 && Y < 465)
            {
                resetXY();
                Serial.println("Click: Manutenção Preventiva");
                btn_Nobreak(3);
            }
        }
    }

    // Menu Nobreak Desliga
    else if (menu == "menu_NobreakDesliga")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(9);
        }

        // Solicitar Assistencia
        if ((X > 10 && X < 300) & (Y > 384 && Y < 463))
        {
            resetXY();
            Serial.println("Click: Solicitar Assistencia");
            btn_NobreakDesliga(7);
        }

        // Sim e Não
        if (X > -3 && X < 153)
        {
            // Sim 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_NobreakDesliga(1);
            }

            // Sim 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_NobreakDesliga(3);
            }

            // Sim 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_NobreakDesliga(5);
            }
        }

        // X Não
        if (X > 160 && X < 312)
        {
            // Não 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_NobreakDesliga(2);
            }

            // Não 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_NobreakDesliga(4);
            }

            // Não 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_NobreakDesliga(6);
            }
        }
    }

    // Menu Nobreak Nao Liga
    else if (menu == "menu_NobreakNaoLiga")
    {

        // Botão Voltar
        if ((X > -10 && X < 40) && (Y > -18 && Y < 33))
        {
            resetXY();
            btnVoltar(9);
        }

        // Solicitar Assistencia
        if ((X > 10 && X < 300) & (Y > 384 && Y < 463))
        {
            resetXY();
            Serial.println("Click: Solicitar Assistencia");
            btn_NobreakNaoLiga(7);
        }

        // Sim e Não
        if (X > -3 && X < 153)
        {
            // Sim 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_NobreakNaoLiga(1);
            }

            // Sim 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_NobreakNaoLiga(3);
            }

            // Sim 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Sim");
                btn_NobreakNaoLiga(5);
            }
        }

        // X Não
        if (X > 160 && X < 312)
        {
            // Não 1
            if (Y > 98 && Y < 150)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_NobreakNaoLiga(2);
            }

            // Não 2
            if (Y > 200 && Y < 252)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_NobreakNaoLiga(4);
            }

            // Não 3
            if (Y > 315 && Y < 358)
            {
                resetXY();
                Serial.println("Click: Não");
                btn_NobreakNaoLiga(6);
            }
        }
    }
}