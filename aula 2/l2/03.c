#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;

    printf("Linhas: ");
    scanf("%d", &linhas);

    printf("Colunas: ");
    scanf("%d", &colunas);

    int **matriz = (int**)malloc(linhas * sizeof(int*));
    for(int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }
}