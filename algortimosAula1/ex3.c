#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que leia 3 valores inteiros A,B e C. Em seguida mostre na tela a soma entre A e B e mostre se a soma é menor que C.

int main (void){

    int a = 0;
    int b = 0;
    int c = 0;
    int soma = 0;

    printf("Valor de a:");
    scanf("%d", &a);

    printf("valor de b:");
    scanf("%d", &b);

    printf("valor de c:");
    scanf("%d", &c);

    soma = a + b;
    printf("Valor da soma: %d\n", soma);

    if (soma > c){
        printf("A soma de A e B é maior que C.");
    }
    else {
        printf("A soma nao e maior");
    }

    return 0;
}