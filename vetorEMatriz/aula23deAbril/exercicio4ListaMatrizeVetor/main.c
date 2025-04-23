#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vect[9];
    int num;

    for (int i = 0; i < 10; i++){
        printf("posicao[%d]: ", i);
        scanf("%d", &vect[i]);
    }

    printf("numero adicional: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++){
        if (num == vect[i]){
            printf("O numero %d esta presente no vetor na posicao [%d] !", num, i);
            printf("\n");
        }
    }
    return 0;
}
