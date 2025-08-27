#include <stdio.h>
#include <stdlib.h>

float calcular_media(int *v, int n) {
    int soma = 0;
    for(int i = 0; i < n; i++) {
        soma += v[i];
    }
    return (float)soma / n;
}

int main() {
    int n;
    
    printf("quantidade de notas: ");
    scanf("%d", &n);

    int *vet = (int*)malloc(n * sizeof(int));
    if (vet == NULL) return 1;

    // Preenche o vetor
    for (int i = 0; i < n; i++){
        printf("nota %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    // Calcula e exibe a média
    printf("media: %f\n", calcular_media(vet, n));
    
    free(vet);
    return 0;
}