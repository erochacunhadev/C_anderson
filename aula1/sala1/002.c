//programa de adição

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
                    // Necessária para funções como printf() e scanf()

int main() {        // Função principal, ponto de início do programa
                    // Retorna um valor inteiro (int) ao sistema operacional

    int a, b, soma; // Declaração de variáveis inteiras:

    printf("Digite o primeiro numero: ");                              
    scanf("%d", &a);                       // Lê um número inteiro (%d) do teclado
                                           // e armazena na variável 'a'
                                           // O '&' antes de 'a' indica o endereço
                                           // de memória onde o valor será guardado
    printf("Digite o segundo numero: ");  
    scanf("%d", &b);                      
    
    soma = a + b; 
    printf("A soma de %d com %d eh %d\n", a, b, soma);
   
    return 0;          // Retorna 0 para o sistema operacional
                       // indicando que o programa terminou com sucesso
}