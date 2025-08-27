#include <stdio.h>

// Funções aritméticas
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
    if (y == 0) {
        printf("erro: divisao por zero!\n");
        return 0;
    }
    return x / y;
}

int main() {
    int a, b, resultado;
    char op;
    int (*ptr)(int, int); // ponteiro para função

    // Entrada de dados
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Escolha a operacao ('a' adicionar, 's' subtrair, 'm' multiplicar, 'd' dividir): ");
    scanf(" %c", &op);

    // Escolha da função
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
            printf("Operacao invalida!\n");
            return 1;
    }

    // Chamada da função via ponteiro
    resultado = ptr(a, b);
    printf("Resultado: %d\n", resultado);

    return 0;
}
