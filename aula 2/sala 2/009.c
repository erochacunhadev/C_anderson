#include <stdio.h>              // Inclui a biblioteca padrão de entrada e saída (printf, scanf)
#include <string.h>             // Inclui a biblioteca para manipulação de strings (strcmp, strlen)
#define melhor "vermelho"       // Define um macro chamado 'melhor' com o valor "vermelho"

int main() {
    char cor[10];               // Declara um vetor de caracteres (string) com espaço para 10 caracteres

    printf("Entre com uma cor: ");      // Solicita ao usuário que digite uma cor
    scanf("%s%*c", cor);                // Lê a cor digitada pelo usuário e armazena em 'cor'
                                        // %s lê uma palavra (até espaço ou enter)
                                        // %*c descarta o próximo caractere (geralmente o enter)

    // Mostra o tamanho da string digitada usando strlen
    printf("A cor digitada tem %zu caracteres.\n", strlen(cor));
    // strlen(cor) retorna o número de caracteres da string digitada (sem contar o '\0')
    // O especificador %zu é usado no printf para imprimir valores do tipo size_t, que é o tipo de retorno da função strlen

    if(strcmp(cor, "vermelho") == 0) {  // Compara a string digitada com "vermelho"
        printf("Cor do melhor time do mundo!\n"); // Se for igual, imprime mensagem positiva
    }
    else {
        printf("Nao eh a cor do melhor time do mundo!\n"); // Se for diferente, imprime mensagem negativa
    }

    // Mostra a cor digitada e a cor definida como 'melhor'
    printf("A cor escolhida foi %s! e a do melhor time do mundo eh %s!", cor, melhor);

    return 0;   // Indica que o programa terminou
}