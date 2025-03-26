#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int removePontuacao(int pontuacao) {
    pontuacao -= 10;

    return pontuacao;
}

int main()
{
    setlocale(LC_ALL, "");

    srand(time(NULL));

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

    if (dificuldade == 1) {
        int numeroAleatorioFacil = rand() % 10 + 1;
        for (int i = 0; i < 5; i++) {
            printf("Tentativa %d: ", i + 1);
            scanf("%d", &tentativa);

            if (tentativa == numeroAleatorioFacil) {
                printf("Parabéns você acertou !\n");
                printf("Sua pontuação final: %d pontos\n", pontuacao);

                if (pontuacao >= 90) {
                    printf("Excelente ! Você é muito bom nisso!\n");
                } else {
                    printf("Boa ! Mas tente melhorar !\n");
                }

                break;
            } else {
                if (tentativa > numeroAleatorioFacil) {
                    printf("O número aleatório é menor!\n");
                } else {
                    printf("O número aleatório é maior!\n");
                }
                pontuacao = removePontuacao(pontuacao);
            }
        }
        if (pontuacao == 0){
            printf("Não foi dessa vez, tente melhorar !");
        }

    }

    else if (dificuldade == 2) {
        int numeroAleatorioMedio = rand() % 50 + 1;
        for (int i = 0; i < 7; i++) {
            printf("Tentativa %d: ", i + 1);
            scanf("%d", &tentativa);

            if (tentativa == numeroAleatorioMedio) {
                printf("Parabéns você acertou !\n");
                printf("Sua pontuação final: %d pontos\n", pontuacao);

                if (pontuacao >= 90) {
                    printf("Excelente ! Você é muito bom nisso!\n");
                } else if (pontuacao < 90 && pontuacao > 10) {
                    printf("Boa ! Mas tente melhorar !\n");
                } else {
                    printf("Não foi dessa vez! Tente novamente.\n");
                }

                break;
            } else {
                if (tentativa > numeroAleatorioMedio) {
                    printf("O número aleatório é menor!\n");
                } else {
                    printf("O número aleatório é maior!\n");
                }
                pontuacao = removePontuacao(pontuacao);
            }
        }
        if (pontuacao == 0){
            printf("Não foi dessa vez, tente melhorar !");
        }
    }

    else if (dificuldade == 3) {
        int numeroAleatorioDifil = rand() % 100 + 1;
        for (int i = 0; i < 10; i++) {
            printf("Tentativa %d: ", i + 1);
            scanf("%d", &tentativa);

            if (tentativa == numeroAleatorioDifil) {
                printf("Parabéns você acertou !\n");
                printf("Sua pontuação final: %d pontos\n", pontuacao);

                if (pontuacao >= 90) {
                    printf("Excelente ! Você é muito bom nisso!\n");
                } else {
                    printf("Boa ! Mas tente melhorar !\n");
                }

                break;
            } else {
                if (tentativa > numeroAleatorioDifil) {
                    printf("O número aleatório é menor!\n");
                } else {
                    printf("O número aleatório é maior!\n");
                }
                pontuacao = removePontuacao(pontuacao);
            }
        }

        if (pontuacao == 0){
            printf("Não foi dessa vez, tente melhorar !");
        }
    }

    return 0;
}
