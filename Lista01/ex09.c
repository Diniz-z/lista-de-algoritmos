#include <stdio.h>

int calSoma(int a, int b);
void showResult( int soma);

int main() {
    int a, b, soma = 0;
    scanf("%d %d", &a, &b);
    soma = calSoma(a,b);
    showResult(soma);
    return 0;
}

int calSoma(int a, int b) {
    return a + b;
}

void showResult(int soma) {
    printf("A SOMA: %d", soma);
}
