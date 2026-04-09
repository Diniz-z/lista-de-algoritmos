#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int vetor[n], vetoresPares[n], contadorPares = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            vetoresPares[contadorPares] = vetor[i];
            contadorPares++;
        }
    }
    printf("\nOs valores pares no intervalo de %d números são:\n", n);
    for (int i = 0; i < contadorPares; i++) {
        printf("%d ", vetoresPares[i]);
    }

    return 0;
}