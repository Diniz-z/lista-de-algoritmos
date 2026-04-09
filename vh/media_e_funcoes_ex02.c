#include <stdio.h>

float calMedia(int soma);
int maiorCal(int atual, int novo);
int menorCal(int atual, int novo);

int main() {
    int vetor[10], soma = 0, maior, menor;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        } else {
            maior = maiorCal(maior, vetor[i]);
            menor = menorCal(menor, vetor[i]);
        }
    }
    printf("\nExibindo na ordem que foi digitado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }
    printf("\nA média dos valores que foram digitados foi: %.2f\n", calMedia(soma));
    printf("O maior entre todos os valores é o %d e o menor é %d", maior, menor);
    return 0;
}

float calMedia(int soma) {
    return soma/10.0;
}

int menorCal(int atual, int novo) {
    if (novo < atual) {
        return novo;
    }
    return atual;
}

int maiorCal(int atual, int novo) {
    if (novo > atual) {
        return novo;
    }
    return atual;
}