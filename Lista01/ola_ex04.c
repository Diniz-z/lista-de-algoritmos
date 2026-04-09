#include <stdio.h>

void escNome( char nome[20]);

int main() {
    char nome[20];
    scanf("%s", &nome);
    escNome(nome);
    return 0;
}

void escNome( char nome[20] ) {
    printf("Ola,%s\n", nome);
}
