#include <stdio.h>

int calParouImp( int v1);

int main() {
    int v1, res = 0;
    scanf("%d", &v1);
    res = calParouImp(v1);
    if (res) {
        printf("O numéro é par");
    }
    else {
        printf("O numéro é impar");
    }
    return 0;
}

int calParouImp(int v1) {
    if (v1 % 2 == 0) {
        v1 = 1;
    }
    else{
        v1 = 0;
    }
    return v1;
}