#include <stdio.h>
#include <stdlib.h>

int main(){

    float media = 0;
    int vect[10];

    for (int i = 0; i < 10; i++){
        printf("posicao %d: ", i);
        scanf("%d", &vect[i]);
        media += vect[i];
    }

    media = media / 10;

    printf("Media do vetor e: %.2f", media);


    return 0;
}
