/*
abrindo arquivo no modo "r" - leitura (com arquivo existente)
aqui, o arquivo.txt existe e contém o conteúdo "Hello world"
*/

#include <stdio.h>

int main() {
    FILE *arquivo;
    char buffer[100]; //espaço na memória para armazenar texto ou binários.

    arquivo = fopen("arquivo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro\n");
        return 1;
    } 

    fgets(buffer, sizeof(buffer), arquivo);
    printf("conteudo: %s", buffer);

    fclose(arquivo);
    return 0;
}