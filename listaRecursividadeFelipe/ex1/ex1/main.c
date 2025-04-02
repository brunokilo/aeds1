#include <stdio.h>
#include <stdlib.h>


// Função recursiva para calcular o fatorial
// Escreva uma função recursiva que calcule o fatorial de um número inteiro
// não-negativo.

int fatorial(int n){
    if(n == 1){
        return 1;
    }
    else {
        return n * fatorial (n-1);
    }
}

int main()
{
    int valor;

    printf("Insira um numero para obter seu fatorial:\n");
    scanf("%d", &valor);

    printf("\nO fatorial e: %d", fatorial(valor));

    return 0;
}

