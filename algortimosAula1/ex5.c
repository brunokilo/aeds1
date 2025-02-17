#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que leia 3 notas de um aluno ( valor real), calcule e mostre a media aritmética das notas.

int main (void){

    double nota1 = 0;
    double nota2 = 0;
    double nota3 = 0;
    double media = 0;

    printf("Nota 1: ");
    scanf("%lf", &nota1);
    printf("Nota 2: ");
    scanf("%lf", &nota2);
    printf("Nota 3: ");
    scanf("%lf", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Media aritmetica: %.2lf", media);

    return 0;
}