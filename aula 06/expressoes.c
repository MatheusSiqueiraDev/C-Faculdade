#include <stdio.h>
#include <conio.h>
#include <math.h>

float distancia (float x, float y) {
    float r;
    r = sqrt(pow(x, 2) + pow(y, 2));
    return r;
}

main() {
    float x, y, z;
    printf("Forneca o valor de x do ponto: ");
    scanf("%f", &x);
    printf("Forneca o valor de y do ponto: ");
    scanf("%f", &y);
    z = distancia(x, y);
    printf("Distancia da origem: %f", z);
    getch();
}