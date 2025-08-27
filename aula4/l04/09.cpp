#include <stdio.h>

void troque3(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b, c;
    
    printf("digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("valores: a = %d, b = %d, c = %d\n", a, b, c);
    
    troque3(&a, &b); 
    troque3(&a, &c); 
    
    printf("valores apos rotacao: a = %d, b = %d, c = %d\n", a, b, c);
    
    return 0;
}