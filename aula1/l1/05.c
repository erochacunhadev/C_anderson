#include <stdio.h>

int main() {
    int a, b;
    int i = 0; // quociente
    int original_a; // para manter o valor original de a
    
    printf("Digite os dois valores:\n");
    scanf("%d %d", &a, &b);

    if (b == 0) {
    printf("Erro: divisão por zero.\n");
    return 1;
    }

    original_a = a; // salva antes de modificar

    while (a - b >= 0) {
        a -= b;
        i++;
    }

    printf("%d / %d = %d, resto %d\n", original_a, b, i, a);

    return 0;
}