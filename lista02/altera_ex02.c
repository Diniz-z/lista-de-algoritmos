#include <stdio.h>

void alteraValor(int n1);

int main() {
    int n1 = 1;
    printf("%d\n", n1);
    alteraValor(n1);
    return 0;
}

void alteraValor(int n1) {
    n1 += 1;
    printf("%d", n1);
}