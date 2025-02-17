#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que receba um número inteiro e mostre se o número é positivo ou negativo.

int main (void){

    int num = 0;

    printf("Numero: ");
    scanf("%d", &num);

    if (num == 0){
        printf("0 e nulo !");
    }
    else if (num > 0){
        printf("%d - Positivo", num);
    }
    else {
        printf("%d - negativo", num);
    }


    return 0;
}