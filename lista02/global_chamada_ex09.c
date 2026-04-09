#include <stdio.h>

int cont_chamada = 0;

int dobro(int n);

int main () {
    int n = 5;
    printf("%d\n", dobro(n));
    printf("%d\n", dobro(n));
    printf("%d\n", dobro(n));
    printf("%d\n", dobro(n));
    printf("%d\n", dobro(n));
    printf("A contagem foi %d", cont_chamada);
    return 0;
}

int dobro(int n) {
    cont_chamada++;
    n *= 2;
    return n;
}