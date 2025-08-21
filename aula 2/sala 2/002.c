//minha versão
#include <stdio.h>

int main(void) {
    int valores[5]; //como declaro um vetor ?
    int i, maior;

    for (i = 0; i < 5; i++) {
        printf("Entre com o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    maior = valores[0];
    for (i = 1; i < 5; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }

    printf("O maior valor do array eh: %d\n", maior);

    return 0;
}

