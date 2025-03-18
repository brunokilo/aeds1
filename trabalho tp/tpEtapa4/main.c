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



    printf("Bem-vindo ao Jogo de Adivinhação !\n");
    printf("Escolha seu nível de dificuldade: \n");
    printf("1. Fácil\n");
    printf("2. Médio\n");
    printf("3. Difícil\n");

    printf("Opção: ");
    scanf("%d", &dificuldade);

    if ( dificuldade == 1) {
        for (int i = 0; i < 5; i++){
            printf("Tentativa %d: ", i + 1);
            scanf("%d", &tentativa);

            if (tentativa == numeroAleatorioFacil){
                printf("Parabéns você acertou !\n");
                printf("Sua pontuação final: %d pontos\n", pontuacao);

                if (pontuacao >= 90){
                printf("Excelente ! Você é muito bom nisso!");
                }

                else if (pontuacao < 90 && pontuacao > 10){
                printf("Boa ! Mas tente melhorar !");
                }

                else {
                printf("Não foi dessa vez! Tente novamente.");
                }

                break;
            }

            else {
                if (tentativa > numeroAleatorioFacil) {
                    printf("O numero aleatório é menor !\n");
                    pontuacao -= 10;
                }
                else {
                    printf("O numero aleatório é maior !\n");
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
                printf("Parabéns você acertou !\n");
                printf("Sua pontuação final: %d pontos\n", pontuacao);

                if (pontuacao >= 90){
                printf("Excelente ! Você é muito bom nisso!");
                }

                else if (pontuacao < 90 && pontuacao > 10){
                printf("Boa ! Mas tente melhorar !");
                }

                else {
                printf("Não foi dessa vez! Tente novamente.");
                }

                break;
            }

            else {
                if (tentativa > numeroAleatorioMedio) {
                    printf("O numero aleatório é menor !\n");
                    pontuacao -= 10;
                }
                else {
                    printf("O numero aleatório é maior !\n");
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
                printf("Parabéns você acertou !\n");
                printf("Sua pontuação final: %d pontos\n", pontuacao);

                if (pontuacao >= 90){
                printf("Excelente ! Você é muito bom nisso!");
                }

                else if (pontuacao < 90 && pontuacao > 10){
                printf("Boa ! Mas tente melhorar !");
                }

                else {
                printf("Não foi dessa vez! Tente novamente.");
                }

                break;
            }

            else {
                if (tentativa > numeroAleatorioDifil) {
                    printf("O numero aleatório é menor !\n");
                    pontuacao -= 10;
                }
                else {
                    printf("O numero aleatório é maior !\n");
                    pontuacao -= 10;
                }
            }

        }
    }



    return 0;
}
