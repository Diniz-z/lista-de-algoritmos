#include <stdio.h>

int main() {
    int vetor[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("\n");
    printf("Exibindo na ordem que foi digitado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
