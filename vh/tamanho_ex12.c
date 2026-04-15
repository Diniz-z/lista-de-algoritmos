#include <stdio.h>

int main() {
    char str[50];
    fgets(str, 50, stdin);

    int tamanho = 0;
    while (str[tamanho] != '\0' || str[tamanho] == '\n') {
        tamanho++;
    }
    printf("O seu tamanho é %d", tamanho - 1);
    return 0;
}
