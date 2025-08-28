/*
modo anexar para um arquivo não existente.
log.rxt é criado com o conteúdo "primeira entrada no log"
*/

#include <stdio.h>

int main() {
    FILE *arquivo;

    arquivo = fopen("log.txt", "a");
    if (arquivo == NULL) {
        printf("erro\n");
        return 1;
    }

    fprintf(arquivo, "primeira entrada no log");
    fclose(arquivo);

    return 0;
}