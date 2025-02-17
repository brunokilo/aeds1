#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que leia a base e altura de um triângulo, calcule e mostre sua área.

int main (void){

    int base = 0;
    int altura = 0;
    int area = 0;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite a altura: ");
    scanf("%d", &altura);

    area = base * altura / 2;

    printf("Area: %d", area);


    return 0;
}