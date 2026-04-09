#include <stdio.h>

int calSoma(int a, int b);

int main() {
    int a, b, soma = 0;
    scanf("%d %d", &a, &b);
    soma = calSoma(a,b);
    printf("A SOMA: %d", soma);
    return 0;
}
int calSoma(int a, int b) {
    return a + b;
}