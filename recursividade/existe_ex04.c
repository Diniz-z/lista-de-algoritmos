#include <stdio.h>

int contador(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("A contagem de número de %d até 0 é %d", n, contador(n));
    return 0;
}

int contador(int n) {
    if (n == 0)
        return 1;
    return 1 + contador(n - 1);
}

/*
 5 4 3 2 1 0

  return 1 + contador( n - 1)
 */