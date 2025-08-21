//multiplas leituras com scanf

#include <stdio.h>

int main() {
    float p1, p2, p3, p4;
    double media;

    printf("Digite as notas das quatro provas: ");
    scanf("%f %f %f %f", &p1, &p2, &p3, &p4); // % diz o que vai ser lido
                                              // & diz onde vai ser guardado o que foi lido

    media = (p1 + p2 + p3 + p4) / 4;

    printf("A media das provas eh: %.2lf\n", media);

    return 0;
}