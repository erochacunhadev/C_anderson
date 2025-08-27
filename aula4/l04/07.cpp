/*
o &a, &b funcionam como um sinônimo da variável original, permitindo que toda alteração
tenha efeito diretamente na variável, diferente da cópia, que não altera no escopo geral
do programa.
*/

#include <iostream>
using namespace std;

void troque2(int &a, int &b) { 
    int temp = a;
    a = b;
    b = temp;
    cout << "na funcao: x = " << a << ", y = " << b << endl;
}

int main() {
    int x = 5, y = 10;
    
    cout << "antes da funcao: x = " << x << ", y = " << y << endl;
    
    troque2(x, y);
    
    cout << "depois do uso da funcao: x = " << x << ", y = " << y << endl;
    
    return 0;
}

