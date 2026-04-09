#include <stdio.h>
void trocar(int *x, int *b);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    trocar(&a, &b);
    printf("%d %d", a, b);
    return 0;
}

void trocar(int *x, int *z){
    int t;
    t = *x;
    *x = *z;
    *z = t;
}