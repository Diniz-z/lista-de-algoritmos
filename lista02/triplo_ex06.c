#include <stdio.h>

int triplo( int numero);

int main() {
    int numero = 5;
    printf("%d\n", numero);
    printf("%d", triplo(numero));
    return 0;
}

int triplo(int numero) {
    numero *= 3;
    return numero;
}
