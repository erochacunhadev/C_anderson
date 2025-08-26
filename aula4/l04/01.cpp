#include <stdio.h>

int main() {
    int *p, a;

    a = 10;
    p = &a; //p aponta para o endereço de a 
    *p = *p * 2; //multiplica o valor que p referencia por 2, resultando em 20.
    printf("a = %d\n", a); //o valor de a estava sendo modificado pelo ponteiro p
                           //e passou a valer 20.

    return 0;
}