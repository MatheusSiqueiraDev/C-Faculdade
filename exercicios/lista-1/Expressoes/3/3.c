#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


float equacao(float vA, float vB, float vC) {
    return pow(vB, 2) - 4 * vA * vC;
}

main() {
    float valorA, valorB, valorC, resultado;
    printf("Forneca o valor de A: ");
    scanf("%f", &valorA);   
    printf("Forneca o valor de B: ");
    scanf("%f", &valorB);
    printf("Forneca o valor de A: ");
    scanf("%f", &valorC);
    resultado = equacao(valorA, valorB, valorC);
    printf("%f", resultado);
}