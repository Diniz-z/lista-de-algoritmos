#include <stdio.h>

void incremento(int *numero);

int main() {
    int numero = 8;
    printf("%d\n", numero);
    incremento(&numero);
    return 0;
}

void incremento(int *numero) {
    (*numero) ++;
    printf("%d", *numero);
}