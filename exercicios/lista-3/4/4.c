#include <stdio.h>

float maior2(float x1, float x2) {
    return x1<x2?x2:x1;
}

float maior3(float x1, float x2, float x3) {
    return maior2(x1, x2)<x3 ?x3 :maior2(x1, x2);
}

main() {
    float valor1, valor2, valor3, resultado1, resultado2;
    printf("Informe o valor 1: ");
    scanf("%f", &valor1);
    printf("Informe o valor 2: ");
    scanf("%f", &valor2);
    printf("Informe o valor 3: ");
    scanf("%f", &valor3);
    resultado1 = maior2(valor1, valor2);
    resultado2 = maior3(valor1, valor2, valor3);
    printf("O maior numero entre %f e %f eh %f\n", valor1, valor2, resultado1);
    printf("O maior numero entre %f e %f e %f eh %f", valor1, valor2, valor3, resultado2);
}