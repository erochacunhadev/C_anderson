#include <stdio.h>

int main() {
    float *q, b;

    b = 3.14;
    *q = *q + 1; //aponta para um endereço aleatório
    printf("*q = %f\n", *q);

    return 0;
}

//o erro aqui é que q não está apontando para nenhum endereço e, mesmo assim, houve a 
//tentativa de alterar o conteúdo para o qual ele aponta.

