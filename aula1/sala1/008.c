//operador ternário
#include <stdio.h>

int main(void) {
    int a = 10, b = 20, c;

    c = (a < b) ? a : b; //Verifica se a < b, se for verdadeiro, c recebe o valor de a, se for falso, c recebe o valor de b

    printf("%d", c);

    return 0;
}