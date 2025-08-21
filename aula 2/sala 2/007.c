#include <stdio.h>
#include <string.h>

int main() {
    // Inicialização de uma cadeia de caracteres no momento da declaração.
    // Aqui, 'nome1' recebe o valor "Anderson" diretamente na criação.
    char nome1[] = "Anderson";

    // Inicialização de uma cadeia de caracteres por atribuição.
    // Primeiro, declaramos o vetor 'nome2' com espaço para 20 caracteres.
    // Depois, copiamos a string "Maria" para 'nome2' usando a função strcpy.
    char nome2[20];
    strcpy(nome2, "Maria");

    // Inicialização de uma cadeia de caracteres por meio do teclado.
    // Declaramos o vetor 'nome3' com espaço para 30 caracteres.
    // Solicitamos ao usuário que digite um nome.
    char nome3[30];
    printf("Digite um nome: ");
    // Usamos fgets para ler a entrada do usuário, garantindo que não ultrapasse o tamanho do vetor.
    fgets(nome3, sizeof(nome3), stdin);

    // Remove o caractere de nova linha ('\n') que pode ser inserido pelo fgets ao final da string.
    nome3[strcspn(nome3, "\n")] = '\0';

    // Exibe os valores armazenados nas três variáveis de cadeia de caracteres.
    printf("Nome 1: %s\n", nome1);
    printf("Nome 2: %s\n", nome2);
    printf("Nome 3: %s\n", nome3);

    return 0;
}