#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    printf("numero 1: numero 2: \n");
    scanf("%d %d", &n1, &n2);
    
    FILE *entrada;

    entrada = fopen("entrada.txt", "w");

    fprintf(entrada, "%d, %d", n1, n2);

    fclose(entrada);

    return 0;
}