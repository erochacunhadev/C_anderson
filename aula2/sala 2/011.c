/*cast*/

int main(){
    int a = 5;
    int b = 2;
    // Divisão de inteiros resulta em inteiro: 5/2 = 2

    float resultado = (float) a / b;
    // Cast forcei 'a' a ser float: 5.0 / 2 = 2.5

    char letra = 'A';
    // Ponteiro para char aponta para 1 byte
    char *ptr_char = &letra;
    
    // Converto para int* (que espera apontar para 4 bytes)
    int *ptr_int = (int*) ptr_char;
    // CUIDADO: Isso pode dar problema se acessar *ptr_int!
}