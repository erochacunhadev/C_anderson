#include <stdio.h>

void troque3(int *a, int *b) {
    int temp = *a; 
    *a = *b;       
    *b = temp;
    printf("na funcao troque: a = %d, b = %d\n", *a, *b);      
}

int main() {
    int x = 5, y = 10;
    
    printf("antes da funcao: x = %d, y = %d\n", x, y);
    
    troque3(&x, &y);
    
    printf("depois do uso da funcao: x = %d, y = %d\n", x, y);
 
    return 0;
}