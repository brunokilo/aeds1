#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que receba a cotação do dólar americano, leia um valor em reais, calcule e mostre quantos dólares é possivel adquirir.

int main (void){

    double real = 0;
    double dolar = 5.70;
    double valorConvertido = 0;

    printf("Valor em real: ");
    scanf("%lf", &real);

    valorConvertido = real / dolar; 

    printf("Conversao: %.2f", valorConvertido);
    

    return 0;
}