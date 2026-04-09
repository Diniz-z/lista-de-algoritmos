#include <stdio.h>

int numeroEle( int a, int b);

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", numeroEle(a, b));

    return 0;
}
int numeroEle( int a, int b) {
    if (b == 1) {
        return a;
    }
        return a * numeroEle(a, b - 1);
}