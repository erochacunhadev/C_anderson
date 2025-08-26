//calcular o produto escalar de dois vetores

#include <stdio.h>

int main() {
    int vetor1[3], vetor2[3];
    int produto_escalar = 0;

    //lendo o primeiro vetor
    printf("Digite os componentes do primeiro vetor (3 inteiros): ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &vetor1[i]);
    }

    //lendo o segundo vetor
    printf("Digite os componentes do segundo vetor (3 inteiros): ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &vetor2[i]);
    }

    //calculando o produto escalar
    for (int i = 0; i < 3; i++) {
        produto_escalar += vetor1[i] * vetor2[i];
    }

    //exibindo o resultado
    printf("O produto escalar entre os dois vetores eh: %d\n", produto_escalar);

    return 0;
}