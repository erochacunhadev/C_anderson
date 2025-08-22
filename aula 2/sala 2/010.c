#include <stdlib.h>

int main() {
    int n = 10;

    int *array = (int*) malloc(n * sizeof(int));
    //ponteiro = (tipo*) malloc(tamanho_em_bytes);

    if (array == NULL) {
        printf("Erro: memoria insuficiente.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        array[i] = i * 2;
    }

    free(array);
    
    return 0;
}