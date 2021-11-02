#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

float triangulo(float l1, float l2, float an) {
    return ((l1 * l2) * sin(an))/2;
}

float convesorAngulo(float g) {
    return (3.141592 * g)/180;
}

main() {
    float lado1, lado2, angulo, resultado;

    printf("Informe o primeiro lado do triangulo: ");
    scanf("%f", &lado1);
    printf("Informe o segundo lado do triangulo: ");
    scanf("%f", &lado2);
    printf("Agora informe o angulo formado por esses lados: ");
    scanf("%f", &angulo);
    angulo = convesorAngulo(angulo);
    resultado = triangulo(lado1, lado1, angulo);
    printf("O resultado é %f ", resultado);
}