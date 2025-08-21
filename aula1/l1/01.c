#include <stdio.h>
#define PI 3.141592653589793

int main(){
    double altura, raio, volume;
    
    printf("Digite a altura e o raio do cilindro circular: ");
    scanf("%lf %lf", &altura, &raio);

    volume  = PI * raio * raio * altura;

    printf("O volume do clinidro eh: %.2lf\n", volume);

    return 0;
}