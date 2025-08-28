/*
aqui, abre o arquivo no modo escrita (para um já existente)
*/

#include <stdio.h>

int main() {
    FILE *arquivo;

    arquivo = fopen("arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("erro\n");
        return 1;
    }

    fprintf(arquivo, "Novo conteúdo");
    fclose(arquivo); // Agora arquivo.txt contém apenas "Novo conteúdo"

    return 0;
}