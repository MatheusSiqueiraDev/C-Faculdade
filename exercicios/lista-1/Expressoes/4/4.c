#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float conversor(float valor) {
    return valor * 1.8 + 32;
}

main() {
    float celsius, resultado;
    printf("Qual e a tempuratura? ");
    scanf("%f", &celsius);
    resultado = conversor(celsius);
    printf("%f", resultado);
}