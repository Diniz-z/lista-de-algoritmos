#include <stdio.h>

char vetorString[5] = {'k', 'a', 'u', 'a'};

int main() {
    printf("Valor antes de ser modificado:\n");
    for (int i = 0; i < 4; i++) {
        printf("%c\n", vetorString[i]);
    }
    printf("\n");
    printf("Valor do ínico modificado:\n");
    *(vetorString + 0) = 'K';
    for (int i = 0; i < 4; i++) {
        printf("%c\n", vetorString[i]);
    }
    return 0;
}
