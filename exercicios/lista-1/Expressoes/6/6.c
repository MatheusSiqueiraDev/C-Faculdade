#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float distancia(float valorX1, float valorX2, float valorY1, float valorY2) {
    return sqrt(((pow((valorX1 - valorX2), 2))+(pow((valorX1 - valorX2), 2))));
}

main() {
    float x1, x2, y1, y2, resultado;
    printf("Informe o valor de X1: ");
    scanf("%f", &x1);
    printf("Informe o valor de x2: ");
    scanf("%f", &x2);
    printf("Informe o valor de y1: ");
    scanf("%f", &y1);
    printf("Informe o valor de y2: ");
    scanf("%f", &y2);
    resultado = distancia(x1, x2, y1, y2);
    printf("%f", resultado);
}