#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// Declaração da função que converte Fahrenheit para Celsius
float converte_fahr_p_celsius(float fahr);

int main() {
    float c, f; // Declara as variáveis para Celsius e Fahrenheit

    printf("Digite a temperatura em Fahrenheit: "); // Solicita ao usuário a temperatura em Fahrenheit
    scanf("%f", &f); // Lê o valor digitado e armazena em 'f'

    c = converte_fahr_p_celsius(f); // Chama a função de conversão e armazena o resultado em 'c'

    printf("Celsius = %.2f\n", c); // Exibe o resultado em Celsius com duas casas decimais
    return 0; // Indica que o programa terminou com sucesso
}

// Implementação da função de conversão
float converte_fahr_p_celsius(float fahr) {
    float c; // Declara variável para Celsius
    c = (fahr - 32.0) * 5.0 / 9.0; // Calcula a conversão de Fahrenheit para Celsius
    return c; //retorna o valor convertido
}