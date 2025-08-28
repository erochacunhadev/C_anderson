/*
modo anexar para um arquivo existente (e já contém o conteúdo "primeira linha")
*/

#include <stdio.h>

int main() {
    FILE *arquivo;

    arquivo = fopen("arquivo.txt", "a");
    if (arquivo == NULL) {
        printf("erro\n");
        return 1;
    }

    fprintf(arquivo, "\nsegunda linha");
    fclose(arquivo);

    return 0;
}