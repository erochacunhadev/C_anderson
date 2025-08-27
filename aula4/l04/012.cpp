#include <stdio.h>

int adicione(int x, int y) {
    return x + y;
}

int subtraia(int x, int y) {
    return x - y;
}

int multiplique(int x, int y) {
    return x * y;
}

int divida(int x, int y) {
    return x / y;
}

int main() {
    int a, b, resultado;
    char op;
    int (*ptr)(int, int); 

    printf("digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("escolha a operacao ('a' adicionar, 's' subtrair, 'm' multiplicar, 'd' dividir): ");
    scanf(" %c", &op);

    switch (op) {
        case 'a':
            ptr = adicione;
            break;
        case 's':
            ptr = subtraia;
            break;
        case 'm':
            ptr = multiplique;
            break;
        case 'd':
            ptr = divida;
            break;
        default:
            printf("operacao invalida.\n");
            return 1;
    }

    resultado = ptr(a, b);
    printf("resultado: %d\n", resultado);

    return 0;
}
