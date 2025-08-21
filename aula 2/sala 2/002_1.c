//versao do professor para encontrar o maior elemento num array

#include <stdio.h>
#define TAMANHO 3

int main() {
    int v[TAMANHO], i, maior;

    printf("Entre com os valores: ");
    for(i = 0; i < TAMANHO; i++) {
        scanf("%d", &v[i]);
    }
    
    maior = v[0];
    for(i = 1; i < TAMANHO; i++) {
        if(maior < v[i]) {
            maior = v[i];
        }
    }
    printf("\nMaior = %d\n", maior);

    return 0;
}