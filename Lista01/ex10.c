#include <stdio.h>

float calSoma(float a, float b, float c);
float calMedia( float n1, float n2, float n3);
float valorMaior( float a, float b, float c);

int main() {
    float a, b, c, soma = 0, media = 0, maior = 0;
    scanf("%f %f %f", &a, &b, &c);
    soma = calSoma(a, b, c);
    printf("A SOMA: %.1f\n", soma);
    media = calMedia(a, b, c);
    printf("A MEDIA É = %.1f\n", media);
    maior = valorMaior(a, b, c);
    printf("O MAIOR: %.1f\n", maior);
    return 0;
}

float calMedia( float n1, float n2, float n3) {
    float media = 0;
    media = (n1 + n2 +n3)/3.0;
    return media;
}
float calSoma(float a, float b, float c){
    return a + b + c;
}

float valorMaior( float a, float b, float c) {
    float maior = 0;
    if (a > b && a > c) {
        maior = a;
    }
    else if (b >a && b > c) {
        maior = b;
    }
    else {
        maior = c;
    }
    return maior;
}