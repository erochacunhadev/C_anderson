#include <stdio.h>

// Função que imprime o conteúdo e endereço da variável x
void print_addr(int x) {
    printf("dentro da funcao:\n");
    printf("conteudo (x): %d\n", x);
    printf("endereco (x): %p\n", (void*)&x);
}

int main() {
    int x = 3;  // Variável x na main
    
    printf("dentro da main:\n");
    printf("conteudo (x): %d\n", x);
    printf("endereco (x): %p\n", (void*)&x);
    printf("\n");
    

    print_addr(x);
    
    return 0;
}

/*
    a linha 19 chama a função passando x como argumento (passagem por valor), logo, são
    armazenadas em endereços diferentes na memória, mesmo que contenham o mesmo elemento.
*/