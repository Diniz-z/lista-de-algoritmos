#include <stdio.h>

int vetor[5] = {2, 4, 6, 8, 10};
// Quando vc faz isso vc está apontando para o começo do vetor que vc está recebendo, e o resto tu já sabe que dá pra manipular
int *p = vetor;

int main() {

    printf("Valores Originais:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }
    printf("\n");
    // Aqui tu só mudou os valores
    printf("Valores Modificados:\n");
    for (int i = 0; i < 5; i++) {
        *(p + i) = *(p + i) * 10;
        // vetor[i] = vetor[i] * 10; - dessa forma aqui também funcionária, só que não usaria ponteiros
    }
    // Aqui vc mostrou os valores
    for (int i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}