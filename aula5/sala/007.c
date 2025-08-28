/*
exemplo completo com relação aos últimos 6 exemplos
*/

#include <stdio.h>

void demonstrar_modos() {
    FILE *f;
    char buffer[100];

    //modo 'w' - cria/sobrescreve
    f = fopen("exemplo.txt", "w");
    if (f != NULL) {
        fprintf(f, "linha 1\n");
        fclose(f);
    }

    //modo 'a' - anexa ao final
    f = fopen("exemplo.txt", "a");
    if (f != NULL) {
        fprintf(f, "linha 2\n");
        fclose(f);
    }

    //modo 'r' = lê o conteúdo
    f = fopen("exemplo.txt", "r");
    if (f != NULL) {
        printf("conteudo final:\n");
        while (fgets(buffer, sizeof(buffer), f) != NULL) {
            printf("%s", buffer);
        }
        fclose(f);
    }
}

int main() {
    demonstrar_modos();
    return 0;
}

