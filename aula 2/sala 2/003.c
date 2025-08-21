//lendo as 3 notas de 8 alunos

#include <stdio.h>

int main(void) {
    float notas[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Entre com a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\nNotas digitadas:\n");
    for (i = 0; i < 3; i++) {
        printf("Aluno %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%.2f, ", notas[i][j]);
        }
        printf("\n");
    }

    return 0;
}