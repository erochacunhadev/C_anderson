/*
aqui, abre o arquivo no modo escrita (para um não existente)
*/

#include <stdio.h>

int main() {
    FILE *arquivo;

    arquivo = fopen("novo_arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("erro\n");
        return 1;
    }

    fprintf(arquivo, "conteúdo criado");
    fclose(arquivo);

    return 0;
}