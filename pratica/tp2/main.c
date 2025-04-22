#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

//�rea de declara��o de fun��es

//Fun��es de desenho

void printFoguetePuc() {
printf("  /\\/\\/\\                           _/**\\_\n");
    printf(" | \\  / |                         /      \\\n");
    printf(" |__\\/__|                       /          \\\n");
    printf(" |  /\\  |----------------------|     /\\     |\n");
    printf(" | /  \\ |                      |    /  \\    |\n");
    printf(" |/    \\|                      |   / __ \\   |\n");
    printf(" |\\    /|                      |  | (  ) |  |\n");
    printf(" | \\  / |                      |  | (__) |  |\n");
    printf(" |__\\/__|                 /\\   |  |      |  |   /\\\n");
    printf(" |  /\\  |                /  \\  |  |______|  |  /  \\\n");
    printf(" | /  \\ |               |----| |  |      |  | |----|\n");
    printf(" |/    \\|---------------|    | | /|   .  |\\ | |    |\n");
    printf(" |\\    /|               |    | /  |   .  |  \\ |    |\n");
    printf(" | \\  / |               |    /    |   .  |    \\    |\n");
    printf(" |__\\/__|               |  /      |   .  |      \\  |\n");
    printf(" |  /\\  |---------------|/        |   .  |        \\|\n");
    printf(" | /  \\ |              /   PUC    |   .  |  MINAS   \\\n");
    printf(" |/    \\|              (__________|______|___________)\n");
    printf(" |/\\/\\/\\|               |____| |--|______|--| |____|\n");
    printf("-------------------------/  \\-----/  \\/  \\-----/  \\--------\n");
    printf("                         \\\\//     \\\\//\\\\//     \\\\//\n");
    printf("                          \\/       \\/  \\/       \\/\n");
    printf("Preparar para queimar combust�vel.\n");
    printf("Aguarde");
    for(int i = 0; i < 15; i++){
        printf(".");
        Sleep(400);
    }
    printf("\n\nEspa�onave pronta para a queima de combust�vel !\n");

}

void printSpaceShuttle() {
    printf("                               _           _   _   _      \n");
    printf("                              | |         | | | | | |     \n");
    printf(" ___ _ __   __ _  ___ ___  ___| |__  _   _| |_| |_| | ___ \n");
    printf("/ __| '_ \\ / _` |/ __/ _ \\/ __| '_ \\| | | | __| __| |/ _ \\\n");
    printf("\\__ \\ |_) | (_| | (_|  __/\\__ \\ | | | |_| | |_| |_| |  __/\n");
    printf("|___/ .__/ \\__,_|\\___\\___||___/_| |_|\\__,_|\\__|\\__|_|\\___|\n");
    printf("    | |                                                   \n");
    printf("    |_|                                                   \n");

}

void printNaveEspacial() {
    printf("                    __,' __`.                _..----....____\n");
    printf("        __...--.'``;.   ,.   ;``--..__     .'    ,-._    _.-'\n");
    printf("  _..-''-------'   `'   `'   `'     O ``-''._   (,;') _,'\n");
    printf(",'________________                          \\`-._`-','\n");
    printf(" `._              ```````````------...___   '-.._'-:\n");
    printf("    ```--.._      ,.                     ````--...__\\-.\n");
    printf("            `.--. `-`                       ____    |  |`\n");
    printf("              `. `.                       ,'`````.  ;  ;`\n");
    printf("                `._`.        __________   `.      \\'__/`\n");
    printf("                   `-:._____/______/___/____`.     \\  `\n");
    printf("                               |       `._    `.    \\\n");
    printf("                               `._________`-.   `.   `.___\n");
    printf("                                                  `------'`\n");
}

void printNavePousada() {

    printf("                     _  _     ____________.--.\n");
    printf("                  |\\|_|//_.-\"\" .'    \\   /|  |\n");
    printf("                  |.-\"\"\"-.|   /       \\_/ |  |\n");
    printf("                  \\  ||  /| __\\_____________ |\n");
    printf("                  _\\_||_/_| .-\"\"            \"\"-.  __\n");
    printf("                .' '.    \\//                    \".\\/\n");
    printf("                ||   '. >()_                     |()<\n");
    printf("                ||__.-' |/\\ \\                    |/\\\n");
    printf("                   |   / \"|  \\__________________/.\"\"\n");
    printf("                  /   //  | / \\ \"-.__________/  /\\\n");
    printf("               ___|__/_|__|/___\\___\".______//__/__\\\n");
    printf("              /|\\     [____________] \\__/         |\\\n");
    printf("             //\\ \\     |  |=====| |   /\\\\         |\\\\\n");
    printf("            // |\\ \\    |  |=====| |   | \\\\        | \\\\        ____...____....----\n");
    printf("          .//__| \\ \\   |  |=====| |   | |\\\\       |--\\\\---\"\"\"\"     .            ..\n");
    printf("_____....-//___|  \\_\\  |  |=====| |   |_|_\\\\      |___\\\\    .                 ...'\n");
    printf(" .      .//-.__|_______|__|_____|_|_____[__\\\\_____|__.-\\\\      .     .    ...::\n");
    printf("        //        //        /          \\ `-_\\\\/         \\\\\n");
    printf("  -... //     .  / /       /____________\\    \\\\       .  \\ \\     .            .\n");
    printf("      //   .. .-/_/-.                 .       \\\\        .-\\_\\-.                 .\n");
    printf("     / /      '-----'           .             \\ \\      '._____.'         .\n");
    printf("  .-/_/-.         .                          .-\\_\\-.                          ...\n");
    printf(" '._____.'                            .     '._____.'                       .....\n");
    printf("        .                                                             ...... ..\n");
    printf("    .            .                  .                        .\n");
    printf("   ...                    .                      .                       .      .\n");
    printf("        ....     .                       .                    ....\n");
    printf(" JRO      ......           . ..                       ......'\n");
    printf("             .......             '...              ....\n");
    printf("                                   ''''''      .              .\n");
}

//Fun��o para printarPlaneta
void printPlaneta() {
    printf("                                                                      ..;===+.\n");
    printf("                                                                  .:=iiiiii=+=\n");
    printf("                                                               .=i))=;::+)i=+,\n");
    printf("                                                            ,=i);)I)))I):=i=;\n");
    printf("                                                         .=i==))))ii)))I:i++\n");
    printf("                                                       +)+))iiiiiiii))I=i+:'\n");
    printf("                                  .,:;;++++++;:,.       )iii+:::;iii))+i='\n");
    printf("                               .:;++=iiiiiiiiii=++;.    =::,,,:::=i));=+'\n");
    printf("                             ,;+==ii)))))))))))ii==+;,      ,,,:=i))+=:\n");
    printf("                           ,;+=ii))))))IIIIII))))ii===;.    ,,:=i)=i+\n");
    printf("                          ;+=ii)))IIIIITIIIIII))))iiii=+,   ,:=));=,\n");
    printf("                        ,+=i))IIIIIITTTTTITIIIIII)))I)i=+,,:+i)=i+\n");
    printf("                       ,+i))IIIIIITTTTTTTTTTTTI))IIII))i=::i))i='\n");
    printf("                      ,=i))IIIIITLLTTTTTTTTTTIITTTTIII)+;+i)+i`\n");
    printf("                      =i))IIITTLTLTTTTTTTTTIITTLLTTTII+:i)ii:'\n");
    printf("                     +i))IITTTLLLTTTTTTTTTTTTLLLTTTT+:i)))=,\n");
    printf("                     =))ITTTTTTTTTTTLTTTTTTLLLLLLTi:=)IIiii;\n");
    printf("                    .i)IIITTTTTTTTLTTTITLLLLLLLT);=)I)))))i;\n");
    printf("                    :))IIITTTTTLTTTTTTLLHLLLLL);=)II)IIIIi=:\n");
    printf("                    :i)IIITTTTTTTTTLLLHLLHLL)+=)II)ITTTI)i=\n");
    printf("                    .i)IIITTTTITTLLLHHLLLL);=)II)ITTTTII)i+\n");
    printf("                    =i)IIIIIITTLLLLLLHLL=:i)II)TTTTTTIII)i'\n");
    printf("                  +i)i)))IITTLLLLLLLLT=:i)II)TTTTLTTIII)i;\n");
    printf("                +ii)i:)IITTLLTLLLLT=;+i)I)ITTTTLTTTII))i;\n");
    printf("               =;)i=:,=)ITTTTLTTI=:i))I)TTTLLLTTTTTII)i;\n");
    printf("             +i)ii::,  +)IIITI+:+i)I))TTTTLLTTTTTII))=,\n");
    printf("           :=;)i=:,,    ,i++::i))I)ITTTTTTTTTTIIII)=+'\n");
    printf("         .+ii)i=::,,   ,,::=i)))iIITTTTTTTTIIIII)=+\n");
    printf("        ,==)ii=;:,,,,:::=ii)i)iIIIITIIITIIII))i+:'\n");
    printf("       +=:))i==;:::;=iii)+)=  `:i)))IIIII)ii+'\n");
    printf("     .+=:))iiiiiiii)))+ii;\n");
    printf("    .+=;))iiiiii)));ii+\n");
    printf("   .+=i:)))))))=+ii+\n");
    printf("  .;==i+::::=)i=;\n");
    printf("  ,+==iiiiii+,\n");
    printf("  `+=+++;\n");
}

//Fun��o Etapa 1
int verificaSenha(char string[]){

    //String que verifica a senha passada atrav�s do parametro
    //Se a senha passada for diferente, retornar� 1
    //Se forem iguais retornar� 0.

    char senhaTp2[] = {'o', 'r', 'b', 'i', 't', 'a', '2','0','2', '5', '\0'};

    for(int i = 0; string[i] != '\0' || senhaTp2[i] != '\0'; i++){
        if (string[i] != senhaTp2[i]){
            return 1;
        }
    }

    return 0;
}

//Fun��o Etapa 1
void mensagemErroTentativas(){
    for(int i = 0; i < 35; i++ ){
        printf("*");
        Sleep(50);
    }
    system("color 04");
    printf("\nProtocolo de seguran�a ativado\n");
    for(int i = 0; i < 35; i++ ){
        printf("*");
        Sleep(50);
    }
}

//Fun��o Etapa 1
void encerramentoPorSenhaErrada() {
    printf("          CORRA QUE O SISTEMA VAI EXPLODIR          ");
    Sleep(1000);
    printf("\nCONTAGEM: 1");
    Sleep(1000);
    printf("\nCONTAGEM: 2");
    Sleep(1000);
    printf("\nCONTAGEM: 3");
    Sleep(1000);
    printf("     .... NO! ...                  ... MNO! ...\n");
    printf("   ..... MNO!! ...................... MNNOO! ...\n");
    printf(" ..... MMNO! ......................... MNNOO!! .\n");
    printf("..... MNOONNOO!   MMMMMMMMMMPPPOII!   MNNO!!!! .\n");
    printf(" ... !O! NNO! MMMMMMMMMMMMMPPPOOOII!! NO! ....\n");
    printf("    ...... ! MMMMMMMMMMMMMPPPPOOOOIII! ! ...\n");
    printf("   ........ MMMMMMMMMMMMPPPPPOOOOOOII!! .....\n");
    printf("   ........ MMMMMOOOOOOPPPPPPPPOOOOMII! ...\n");
    printf("    ....... MMMMM..    OPPMMP    .,OMI! ....\n");
    printf("     ...... MMMM::   o.,OPMP,.o   ::I!! ...\n");
    printf("         .... NNM:::.,,OOPM!P,.::::!! ....\n");
    printf("          .. MMNNNNNOOOOPMO!!IIPPO!!O! .....\n");
    printf("         ... MMMMMNNNNOO:!!:!!IPPPPOO! ....\n");
    printf("           .. MMMMMNNOOMMNNIIIPPPOO!! ......\n");
    printf("          ...... MMMONNMMNNNIIIOO! ..........\n");
    printf("       ....... MN MOMMMNNNIIIIIO! OO ..........\n");
    printf("    ......... MNO! IiiiiiiiiiiiI OOOO ...........\n");
    printf("  ...... NNN.MNO! . O!!!!!!!!!O . OONO NO! ........\n");
    printf("   .... MNNNNNO! ...OOOOOOOOOOO .  MMNNON!........\n");
    printf("   ...... MNNNNO! .. PPPPPPPPP .. MMNON!........\n");
    printf("      ...... OO! ................. ON! .......\n");
    printf("         ................................\n");
    printf("              SISTEMA EST� BLOQUEADO !            ");
}

//Fun��o Etapa 2
void menuPrincipal(){
    printf("\n");
    Sleep(700);
    printf("\n===== SISTEMA DE CONTROLE DE MISS�ES ESPACIAIS =====\n");
    Sleep(700);

    printf("\n--- MENU PRINCIPAL ---");
    Sleep(700);

    printf("\n1. Simular Queima de Combust�vel");
    printf("\n2. Calcular �ngulo de Trajet�ria");
    printf("\n3. Calcular Gravidade em Planeta");
    printf("\n4. Registrar Miss�o");
    printf("\n5. Ver Hist�rico de Miss�es");
    printf("\n6. Calcular Energia para Emerg�ncia (Recursivo)");
    printf("\n7. Ordenar Miss�es por Dist�ncia");
    printf("\n8. Miss�o Final - Simula��o de Decis�o");
    printf("\n9. Sair");

}

//Fun��o Etapa 3
int queimaDeCombustivel(int n){
    int combustivel = 1000;


    for(int i = 0; i < n; i++){
        combustivel -= 50;
        printf("\nCombust�vel atual: %d\n", combustivel);
        Sleep(500);

        if(combustivel == 500){
            printf("\nAtingindo atmosfera superior !\n");
            Sleep(900);
        }
        if(combustivel == 100){
            printf("\nQuase em �rbita !\n");
            Sleep(900);
        }
        if (combustivel == 0) {
            printf("O combust�vel chegou ao fim !");
            return combustivel;
        }
        Sleep(500);
    }

}

//Fun��o Etapa 4

float calculoTrajetoria(float distancia){
    float angulo;
    angulo = distancia * 0.42 + 18;
    return angulo;
}

float dadosTrajetoria(float distancia){
    float angulo = calculoTrajetoria(distancia);
    printf("\nDist�ncia: %.2f", distancia);
    printf("\n�ngulo: %.2f", angulo);

    return 0;
}

//Fun��o Etapa 5
void gravidadeDosPlanetas(int n){
    float gravidade = 0;

    if (n == 1){
        printf("Marte: Gravidade de 3.7 m/s^2");
        gravidade = 3.7;
    }
    else if (n == 2){
        printf("J�piter: Gravidade de 24.8 m/s^2");
        gravidade = 24.8;
    }
    else if (n == 3){
        printf("J�piter: Gravidade de 10.4 m/s^2");
        gravidade = 10.4;
    }

    if (gravidade <= 15){
        printf("\nGravidade moderada");
    }
    else {
        printf("\nGravidade forte. Aumente o empuxo.");
    }
}


int main() {

    setlocale(LC_ALL,"");

    //�rea de declara��o de vari�veis

    char senha[11];
    int verificacaoSenha;
    int escolha;

    printSpaceShuttle();
    printNaveEspacial();
    printf("\nBem vindo ao sistema de login SpaceShuttle !\n");
    printf("Para se conectar use sua senha !\n");
    printf("Voc� tem 3 tentativas, se voc� errar as 3, o sistema vai explodir!\n");


    for (int i = 0; i < 3; i ++){

        printf("\nTentativa %d/3", i+1);
        printf("\nDigite a senha: ");
        scanf("%s", &senha);
        verificacaoSenha = verificaSenha(senha);

        if (verificacaoSenha == 1){
            printf("Senha errada !\n");
        }

        else {
            do{

                menuPrincipal();

                printf("\n Sua escolha: ");
                scanf("%d", &escolha);

                if (escolha == 1){
                    int iteracoesCombustivel;
                    printFoguetePuc();
                    printf("\nOp��o selecionada: Queima de combust�vel");
                    printf("\nDigite o numero de itera��es para a queima de combust�vel: ");
                    scanf("%d", &iteracoesCombustivel);
                    queimaDeCombustivel(iteracoesCombustivel);
                }

                if (escolha == 2){
                    float distancia;
                    printf("\nOp��o selecionada: Calcular �ngulo de Trajet�ria");
                    printf("\nDigite a dist�ncia: ");
                    scanf("%f", &distancia);
                    calculoTrajetoria(distancia);
                    printf("%f", dadosTrajetoria(distancia));
                }

                if (escolha == 3) {
                    int escolhaGravidade;
                    printPlaneta();
                    printf("\nGravidade dos planetas: ");
                    printf("\n1. Marte: 3.7 m/s^2");
                    printf("\n2. J�piter: 24.8 m/s�");
                    printf("\n3. Saturno: 10.4 m/s�");
                    printf("\nEscolha o planeta que gostaria de descer: ");
                    scanf("%d", &escolhaGravidade);
                    gravidadeDosPlanetas(escolhaGravidade);
                }
            }while(escolha != 9);

            break;
        }

        if (i == 2){
        mensagemErroTentativas();
        printf("\n");
        encerramentoPorSenhaErrada();
        break;
        }

    }

    return 0;
}


