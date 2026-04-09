# include <stdio.h>

int quadrado (int x);

int main() {
    int n1, res = 0;
    scanf("%i", &n1);
    res = quadrado(n1);
    printf("%i", res);
    return 0;
}

int quadrado (int x) {
    return x*x;
}