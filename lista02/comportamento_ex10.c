#include <stdio.h>

// Declaração das funções que eu estou chamando, para que eu não tenha problemas com escopo
int triplo( int *res);
int dobro(int *res);


int main () {
    // Estou falando que a minha variável res tem um valor 2
    int res = 2;
    // Estou falando que a função triplo vai receber como argumento o res e o valor dessa função vai ser atribuido a
    // res, assim gerando um novo resultado, no caso o triplo de 2
    res = triplo(&res);
    printf("O triplo de 2 é %d\n", res);
    // Estou falando que a função dobro vai receber como argumento o novo res (6) e o valor dessa função vai ser atribuido a
    // res, assim gerando um novo resultado, no caso o dobro de 6
    res = dobro(&res);
    printf("O dobro do triplo de 2 é %d", res);
    return 0;
}

// As ações que as funções vão executar, e ainda no final para evitar problemas de escopo

int triplo(int *res) {
    *res *= 3;
    return *res;
}

int dobro(int *res) {
    *res *= 2;
    return *res;
}