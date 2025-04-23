#include <stdio.h>
#include <stdlib.h>

int main() {
    int vect[10];
    int vectInvertido[10];

    for (int i=0; i < 10; i++){
        printf("posicao[%d]: ", i);
        scanf("%d", &vect[i]);
    }

    for (int i=10; i > 0; i--){
        for (int j=0; j < 10; j++){
            if (i != j){
                vectInvertido[i] = vect[j];
            }
        }
    }

    for (int i=0; i < 10; i++){
        printf("posicao[%d]: ", vectInvertido[i]);
        printf("\n");

    }



    return 0;
}
