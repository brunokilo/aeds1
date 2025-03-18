#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "");

    srand(time(NULL));

    int numeroAleatorioFacil = rand() % 10;
    int numeroAleatorioMedio = rand() % 51;
    int numeroAleatorioDifil = rand() % 101;
    int dificuldade = 0;
    int pontuacao = 100;
    int tentativa = 0;



    printf("Bem-vindo ao Jogo de Adivinha��o !\n");
    printf("Escolha seu n�vel de dificuldade: \n");
    printf("1. F�cil\n");
    printf("2. M�dio\n");
    printf("3. Dif�cil\n");

    printf("Op��o: ");
    scanf("%d", &dificuldade);

    if ( dificuldade == 1) {
        for (int i = 0; i < 5; i++){
            printf("Tentativa %d: ", i + 1);
            scanf("%d", &tentativa);

            if (tentativa == numeroAleatorioFacil){
                printf("Parab�ns voc� acertou !\n");
                printf("Sua pontua��o final: %d pontos\n", pontuacao);

                if (pontuacao >= 90){
                printf("Excelente ! Voc� � muito bom nisso!");
                }

                else if (pontuacao < 90 && pontuacao > 10){
                printf("Boa ! Mas tente melhorar !");
                }

                else {
                printf("N�o foi dessa vez! Tente novamente.");
                }

                break;
            }

            else {
                if (tentativa > numeroAleatorioFacil) {
                    printf("O numero aleat�rio � menor !\n");
                    pontuacao -= 10;
                }
                else {
                    printf("O numero aleat�rio � maior !\n");
                    pontuacao -= 10;
                }
            }
        }
    }

    else if (dificuldade == 2){
        for (int i = 0; i < 7; i++){

            printf("Tentativa %d: ", i + 1);
            scanf("%d", &tentativa);

            if (tentativa == numeroAleatorioMedio){
                printf("Parab�ns voc� acertou !\n");
                printf("Sua pontua��o final: %d pontos\n", pontuacao);

                if (pontuacao >= 90){
                printf("Excelente ! Voc� � muito bom nisso!");
                }

                else if (pontuacao < 90 && pontuacao > 10){
                printf("Boa ! Mas tente melhorar !");
                }

                else {
                printf("N�o foi dessa vez! Tente novamente.");
                }

                break;
            }

            else {
                if (tentativa > numeroAleatorioMedio) {
                    printf("O numero aleat�rio � menor !\n");
                    pontuacao -= 10;
                }
                else {
                    printf("O numero aleat�rio � maior !\n");
                    pontuacao -= 10;
                }
            }

        }
    }

    else if (dificuldade == 3){
        for (int i = 0; i < 10; i++){
            printf("Tentativa %d: ", i + 1);
            scanf("%d", &tentativa);

            if (tentativa == numeroAleatorioDifil){
                printf("Parab�ns voc� acertou !\n");
                printf("Sua pontua��o final: %d pontos\n", pontuacao);

                if (pontuacao >= 90){
                printf("Excelente ! Voc� � muito bom nisso!");
                }

                else if (pontuacao < 90 && pontuacao > 10){
                printf("Boa ! Mas tente melhorar !");
                }

                else {
                printf("N�o foi dessa vez! Tente novamente.");
                }

                break;
            }

            else {
                if (tentativa > numeroAleatorioDifil) {
                    printf("O numero aleat�rio � menor !\n");
                    pontuacao -= 10;
                }
                else {
                    printf("O numero aleat�rio � maior !\n");
                    pontuacao -= 10;
                }
            }

        }
    }



    return 0;
}
