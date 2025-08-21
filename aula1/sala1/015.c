//multiplas inicializações no loop

#include <stdio.h>

int main(void) {
    for(int i = 0, j = 1; i < 10; i ++) {
        printf("i = %d, j = %d\n", i, j);
        j *= 2;
    }
    return 0;
}