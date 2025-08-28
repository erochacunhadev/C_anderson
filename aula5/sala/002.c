/*
abrindo arquivo no modo "r" - leitura (com arquivo inexistente)
*/

#include <stdio.h>

int main() {
    FILE *arquivo;

    arquivo = fopen("arquivo_inexistente.txt", "r");
    if (arquivo == NULL) {
        printf("erro\n");
        return 1;
    }

    fclose(arquivo);
    return 0;
}