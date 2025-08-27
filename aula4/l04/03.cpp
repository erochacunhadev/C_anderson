#include <stdio.h>

int main() {
    int x, y;
    int *p, *q;

    x = 2;
    y = 8;

    p = &x;
    q = &y;

    printf("endereco de x: %p, valor de x: %d\n", p, x);
    printf("valor de p: %p, valor de *p: %d\n", p, *p);
    printf("endereco de y: %p, valor de y: %d\n", q, y);
    printf("endereco de p: %p", &p);
}