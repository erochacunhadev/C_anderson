//comando switch

#include <stdio.h>

int main(void) {
    int op;

    printf("Entre com uma opcao: (1 ou 2) \n");
    scanf("%d", &op);

    switch(op) {
        case 1:
        printf("Opcao 1 selecionada.\n");
        break;

        case 2:
        printf("Opcao 2 selecionada.\n");
        break;

        default:
        printf("Opcao invalida, entre com a opcao 1 ou 2.\n");
        break;
    }

    return 0;
}