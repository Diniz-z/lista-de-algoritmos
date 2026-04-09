#include <stdio.h>

void proValor(int numero);
void proRef( int *numero);

int main() {
    int numero = 5;
    proValor(numero);
    proRef(&numero);
    return 0;
}

void proValor(int numero) {
    numero *= 5;
    printf("%d\n", numero);
}

void proRef(int *numero) {
    *numero *= 3;
    printf("%d", *numero);
}