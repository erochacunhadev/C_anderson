#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matriz, **transposta;
    int linhas, colunas, i, j;

    printf("Linhas: ");
    scanf("%d", &linhas);

    printf("Colunas: ");
    scanf("%d", &colunas);

    int **matriz = (int**)malloc(linhas * sizeof(int*));
    for(int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }

    transposta = (int**)malloc(colunas * sizeof(int*));
    for(i = 0; i < colunas; i++) {
        transposta[i] = (int*)malloc(linhas * sizeof(int));
    }

    printf("\nDigite os elementos da matriz:\n");
    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    for(i = 0; i < linhas; i ++) free(matriz[i]);
    free(matriz);
    for(i = 0; i < colunas; i++) free(transposta[i]);
    free(transposta);

    return 0;

}