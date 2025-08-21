#include <stdio.h>

int main(){
    float media;

    printf("Qual sua media? ");
    scanf("%f", &media);

    if (media >= 6.0) {
        printf("Aprovado com media %.1f\n", media);
    } else {
        printf("Reprovado com media %.1f\n", media);
    }

    return 0;
}