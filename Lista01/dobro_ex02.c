#include <stdio.h>

int voltDobro(int v1);

int main() {
    int v1, res = 0;
    scanf("%d", &v1);
    res = voltDobro(v1);
    printf("Valor do dobro: %d\n", res);
    return 0;
}

int voltDobro(int v1) {
    v1 *= 2;
    return v1;
}
