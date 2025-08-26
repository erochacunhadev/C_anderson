#include <stdio.h>

int main() {
    int x, y;
    int *p, *q;

    x = 2;
    y = 8;

    p = &x;
    q = &y;

    printf("Endereco de x: %p, valor de x: %d\n", p, x);
    printf("Valor de p: %p, valor de *p: %d\n", p, *p);
    printf("Endereco de y: %p, valor de y: %d\n", q, y);
    printf("Endereco de p: %p", &p);
}