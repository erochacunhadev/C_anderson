#include <stdio.h>

int main() {
    int num = -1, qtd = 0, ma = 0;

    printf("Digite quantos numeros quiser. Para parar, digite 0.\n");

    while (num != 0) {
        printf("Digite um numero:\n");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        qtd += 1;
        ma += num;
    }

    printf("A quantidade de numeros digitados eh: %d\n", qtd);

    if (qtd > 0) {
        ma /= qtd;
        printf("A media dos numeros digitados eh: %d\n", ma);
    } else {
        printf("Nenhum numero foi digitado para calcular a media.\n");
    }

    return 0;
}