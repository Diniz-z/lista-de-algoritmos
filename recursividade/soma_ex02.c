#include <stdio.h>

int somaAteN(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    if (n == 1) {
        return 1;
    }
        return n + somaAteN(n - 1);
}

/*
 5 + 4 + 3 + 2 + 1 = 15 soma(5) -
 n + soma(n - 1)
 */