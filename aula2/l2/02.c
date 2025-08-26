/*Escreva um programa que sorteia aleatoriamente seis números inteiros x, onde 1 ≤ x ≤ 60,
e os armazene em um vetor. Em seguida, o usuário fornece um número e seu programa
deve indicar se o número digitado está no vetor ou não. Se estiver, infome a posição. O
programa deve finalizar quando o usuário entrar com zero
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 6

int main() {
    int vetor[TAM];
    int numero, i, encontrado = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    // srand(): Função que inicializa o gerador de números aleatórios (rand())
    // Precisa ser chamada uma vez antes de usar rand() para gerar valores diferentes em cada execução

    // time(NULL): Função que retorna o tempo atual em segundos desde 1º de Janeiro de 1970 (Epoch)
    // O valor retornado muda a cada segundo, fornecendo uma "semente" diferente para srand()

    // NULL: Ponteiro nulo que indica para time() que não estamos interessados em armazenar o valor
    // Equivalente a time(0), pois só queremos o valor de retorno da função

    // Juntos: srand(time(NULL)) usa o tempo atual como semente para inicializar o gerador aleatório,
    // garantindo sequências diferentes de números aleatórios em cada execução do programa

    // Preenche o vetor com números aleatórios
    for(i = 0; i < TAM; i++) {
        vetor[i] = rand() % 60 + 1; // Gera números entre 1 e 60
    }
    // Exibe os números sorteados
    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i = 0; i < TAM; i++) {
        if(vetor[i] == numero) {
            printf("O numero %d esta na posicao %d do vetor.\n", numero, i);
            encontrado = 1; // Marca que o número foi encontrado
            break; // Sai do loop se o número for encontrado
        }
    }
    
    if(!encontrado) {
        printf("O numero %d nao esta no vetor.\n", numero);
    }
    
    //imprimindo o vetor
    printf("Vetor: ");
    for(i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
}