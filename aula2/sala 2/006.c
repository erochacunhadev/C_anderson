#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

void f(int b[]); // Declara a função f que recebe um array de inteiros

int main() {
    int b[2] = {2, 10}; // Declara e inicializa um array de 2 inteiros: b[0]=2, b[1]=10

    printf("antes\nb[0] = %d, b[1] = %d\n\n", b[0], b[1]); // Imprime os valores iniciais do array

    f(b); // Chama a função f passando o array b

    printf("depois\nb[0] = %d, b[1] = %d\n", b[0], b[1]); // Imprime os valores do array após a função

    return 0; // Encerra o programa
}

void f(int b[]) {
    b[0] += 1; // Incrementa o primeiro elemento do array em 1
    b[1] += 1; // Incrementa o segundo elemento do array em 1
}

/*
A principal diferença entre os dois códigos está na forma de passagem de parâmetros para as funções e no efeito que isso causa nas variáveis 
originais:

no 5: Passagem por valor:
A função f(int a) recebe uma cópia do valor de a.
Alterações feitas em a dentro da função não afetam a variável a do main.
O valor de a antes e depois da chamada da função permanece igual.

no 6: Passagem de array (por referência):
A função f(int b[]) recebe um ponteiro para o array b.
Alterações feitas em b[0] e b[1] dentro da função afetam o array original no main.
Os valores do array mudam após a chamada da função.
*/