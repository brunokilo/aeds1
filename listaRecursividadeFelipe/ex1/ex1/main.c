#include <stdio.h>
#include <stdlib.h>


// Fun��o recursiva para calcular o fatorial
// Escreva uma fun��o recursiva que calcule o fatorial de um n�mero inteiro
// n�o-negativo.

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

