#include <stdio.h>

void calculaSoma(int n, int *soma) {
    *soma = 0;
    while (n > 0) {
        *soma += n;
        n--;
    }
}

void exibeResultado(int n, int soma) {
    printf("a soma dos %d primeiros numeros eh: %d\n", n, soma);
}

int main() {
    int n, soma;

    printf("quantos numeros deseja somar ? (1 até n) \n");
    scanf("%d", &n);

    calculaSoma(n, &soma);      
    exibeResultado(n, soma);  

    return 0;
}
