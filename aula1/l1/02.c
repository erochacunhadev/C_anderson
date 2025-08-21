#include <stdio.h>

int main(){
    float valor, multa;

    printf("Qual o valor da velocidade (em km/h) do carro?\n");
    scanf("%f", &valor);

    if (valor > 80) {
        multa = (valor - 80) * 5;
        printf("Valor da multa: R$ %.2f\n", multa, "Por estar acima do limite de velocidade permitido.\n");
    }
    else {
        printf("Dentro do limite de velocidade permitido.\n");
    }
    
    return 0;
}