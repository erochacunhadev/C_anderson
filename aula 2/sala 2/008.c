#include <stdio.h>      // Inclui a biblioteca padrão de entrada e saída
#include <string.h>     // Inclui a biblioteca para manipulação de strings

int main() {
    // Declara um vetor de caracteres (string) chamado 'destino' com espaço para 50 caracteres e inicializa com "Ola, "
    char destino[50] = "Ola, ";
    // Declara e inicializa a string 'origem' com "mundo!"
    char origem[] = "mundo!";
    // Declara e inicializa a string 'origem2' com " Bem-vindo ao C!"
    char origem2[] = " Bem-vindo ao C!";

    // Usa a função strcat para concatenar a string 'origem' ao final da string 'destino'
    // Após essa linha, 'destino' passa a ser "Ola, mundo!"
    strcat(destino, origem);
    // Exibe o conteúdo atual de 'destino' após a concatenação
    printf("Apos strcat: %s\n", destino);

    // Usa a função strncat para concatenar apenas os 16 primeiros caracteres de 'origem2' ao final de 'destino'
    // Após essa linha, 'destino' passa a ser "Ola, mundo! Bem-vindo ao C!"
    strncat(destino, origem2, 16); // concatena apenas os primeiros 16 caracteres
    // Exibe o conteúdo atual de 'destino' após a segunda concatenação
    printf("Apos strncat: %s\n", destino);

    // Retorna 0 indicando que o programa terminou com sucesso
    return 0;
}