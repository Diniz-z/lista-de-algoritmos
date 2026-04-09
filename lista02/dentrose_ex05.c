#include <stdio.h>

int main () {
    int numero = 10;
    printf("%d\n", numero);
    if (1) {
        int numero = 20;
        printf("%d\n", numero);
    }
    printf("%d", numero);
    return 0;
}
