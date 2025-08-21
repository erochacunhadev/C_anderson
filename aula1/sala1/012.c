//placeholders em C

#include <stdio.h>

int main() {
    int idade = 25;
    float altura = 1.75f;
    double salario = 2500.50;
    char letra = 'A';
    char nome[] = "João";
    int *ptr = &idade;
    
    printf("Idade: %d anos\n", idade);           // %d - inteiro
    printf("Altura: %.2f metros\n", altura);     // %f - float com 2 casas
    printf("Salario: R$ %.2lf\n", salario);      // %lf - double
    printf("Letra inicial: %c\n", letra);        // %c - caractere
    printf("Nome: %s\n", nome);                  // %s - string
    printf("Endereco: %p\n", ptr);               // %p - ponteiro/endereço
    printf("Hexadecimal: %x\n", idade);          // %x - hexadecimal
    printf("Porcentagem: 50%% de desconto\n");   // %% - símbolo %
    
    return 0;
}