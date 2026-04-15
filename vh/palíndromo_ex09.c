#include <stdio.h>

int main() {
    char palavra[50];

    scanf("%s", str);

    int tamanho = 0;
    for (int i = 0; palavra[i] != '\0'; i++ ) {
        tamanho++;
    }

    int palindromo = 1;
    for (int i = 0; i < tamanho / 2; i++)
        if (str[i] != str[tamanho - 1 - i]) {
            palindromo = 0;
            break;
        }

    if (palindromo) {
        printf("palindromo");
    }
    else {
        printf("não palindromo");
    }
    return 0;
}
