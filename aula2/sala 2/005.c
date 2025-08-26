#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

void f(int a); // Declaração da função f que recebe um inteiro

int main() {
    int a; // Declara a variável inteira 'a'
    a = 2; // Inicializa 'a' com o valor 2

    printf("a antes = %d\n", a); // Imprime o valor de 'a' antes da chamada da função

    f(a); // Chama a função f passando 'a' como argumento

    printf("a depois = %d\n", a); // Imprime o valor de 'a' após a chamada da função

    return 0; // Indica que o programa terminou com sucesso
}

void f(int a) { // Implementação da função f que recebe um inteiro
    a += 1; // Soma 1 ao parâmetro local 'a' (não altera o 'a' do main)
}


/*

passagem de parâmetros por valor em C.

Quando uma função é chamada em C, os argumentos são passados por valor, ou seja, uma cópia do valor da variável é enviada para a função. 
Alterações feitas no parâmetro dentro da função não afetam a variável original fora dela.

No exemplo, a função f recebe uma cópia de a, soma 1 ao valor local, mas isso não altera o valor de a no main. Por isso, o valor impresso antes e depois 
da chamada da função permanece o mesmo. Isso mostra que, para modificar o valor de uma variável dentro de uma função, é necessário passar o endereço dela 
(usando ponteiros).

*/