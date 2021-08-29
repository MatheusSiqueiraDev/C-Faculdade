#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float convesorAngulo(float g) {
    const float pi = 3.141592;
    return (pi * g)/180;
}

main() {
    float graus, resultado;
    printf("Informe o angulo medido em graus: ");
    scanf("%f", &graus);
    resultado = convesorAngulo(graus);
    printf("O resultado e: %.2f ", resultado);
    getch();
}