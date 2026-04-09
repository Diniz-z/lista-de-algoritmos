#include <stdio.h>

int escopoFuncao(int n1);

int main() {
    int n1 = 2;
    printf("%d\n", n1);
    printf("%d",escopoFuncao(n1));
    return 0;
}

int escopoFuncao(int n1) {
    n1 = 8;
    return n1;
}
