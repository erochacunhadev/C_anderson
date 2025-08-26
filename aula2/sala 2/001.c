#include <stdio.h>

int main(void) {
    int i;
    float notas[10], media = 0;

    printf("Entre com as notas: ");
    
    for (i = 0; i < 10; i++) {
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    media /= 10;

    printf("media = %f\n", media);
    if (media >= 7) {                //aqui eu poderia n ter usado o {} porque há apenas uma instrução
        printf("Media da escola maior ou igual a 7!\n");
    }
    else {
        printf("Media da escola menor que 7.\n");
    }

    return 0;
}
