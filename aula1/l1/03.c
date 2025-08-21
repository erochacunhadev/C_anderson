#include <stdio.h>

int minimo3(int a, int b, int c);
int maximo3(int a, int b, int c);

int main(){
    int a, b, c;
    printf("Entre com os tres valores:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Minimo: %d\n", minimo3(a, b, c));
    printf("Maximo: %d\n", maximo3(a, b, c));

    return 0;
}

int minimo3(int a, int b, int c) {
    int min = a;
    if (b < min){
        min = b;
    }
    if (c < min){
        min = c;
    }
    return min;
}

int maximo3(int a, int b, int c) {
    int max = a;
    if (b > max){
        max = b;
    }
    if (c > max){
        max = c;
    }
    return max;
}