#include <stdio.h>

int main() {
    int vetor[10], vetor2[1];
    for (int i = 0; i < 10; i++) {
        do {
            scanf("%d", &vetor[i]);
        }while (vetor[i] == 0);
    }
    printf("Digite um número dos quais vc digitou que vc deseja que seja substituido por zero\n");
    scanf("%d", &vetor2[0]);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == vetor2[0]) {
            vetor[i] = 0;
        }
    }
    printf("Vetor resultante: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
