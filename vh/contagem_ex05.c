#include <stdio.h>

int main(void) {

    int vetor[10] = {0}, n;

    scanf("%d", &n);

    while (n / 10 > 0) {
        vetor[n % 10]++;
        n /= 10;
    }

    vetor[n]++;

    for (int i = 0; i < 10; i++) {
        printf("%d = %d\n", i, vetor[i]);
    }

    return 0;
}