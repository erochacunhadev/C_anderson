#include <stdio.h>

int main(void) {
    int altura_cm, idade;

    printf("Digite sua altura em centimetros: ");
    scanf("%d", &altura_cm);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Voce nao tem idade para entrar no brinquedo.\n");
    } else {
        if (altura_cm < 150) {
            printf("Voce nao tem altura suficiente para entrar no brinquedo.\n");
        } else {
            printf("Voce pode usar o brinquedo.\n");
        }
    }

    return 0;
}