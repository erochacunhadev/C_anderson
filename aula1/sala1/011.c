//laço while

#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    while(n != 0) {
        printf("%d\n", n * n * n);
        scanf("%d", &n);
    }

    return 0;
}