#include <stdio.h>

void altera(int *n);

int main() {
    int n;
    scanf("%d", &n);
    printf("O valor antes do procedimento %d\n", n);
    altera(&n);
    return 0;
}

void altera(int *n) {
    *n *= 3;
    printf("O valor depois de executado o procedimento %d", *n);
}