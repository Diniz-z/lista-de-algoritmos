#include <stdio.h>

float calMedia( float n1, float n2, float n3);

int main() {
    float media = 0, n1, n2, n3;
    scanf("%f %f %f", &n1, &n2, &n3);
    media = calMedia(n1, n2, n3);
    printf("A MEDIA É = %.1f\n", media);
    return 0;
}

float calMedia( float n1, float n2, float n3) {
    float media = 0;
    media = (n1 + n2 +n3)/3.0;
    return media;
}