#include <stdio.h>

int main() {
    int idade = 25;
    int numero;
    
    printf("Valor: %d\n", idade);      // Imprime: Valor: 25
    printf("Endereco: %p\n", &idade);  // Imprime: Endereco: 0x7ffd42a3b45c

    // CORRETO: Passa o ENDEREÇO onde scanf deve guardar o valor
    scanf("%d", &numero);
    // ERRADO: Passa apenas o valor (que é lixo, pois não foi inicializado)
    // scanf("%d", numero); // Isso causaria comportamento indefinido!
    
    return 0;
}