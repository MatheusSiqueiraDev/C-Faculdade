#include <stdio.h>
#include <stdlib.h>

void adicao(float *numerador, float *denominador, float x1, float x2, float y1, float y2) {
    *numerador = x1 * y2 + y1 * x2;
    *denominador = x2 * y2;
}

void subtracao(float *numerador, float *denominador, float x1, float x2, float y1, float y2) {
    *numerador = x1 * y2 - y1 * x2;
    *denominador = x2 * y2;
}

void divisao(float *numerador, float *denominador, float x1, float x2, float y1, float y2) {
    *numerador = x1 * y2;
    *denominador = x2 * y1;
}

void multiplicacao(float *numerador, float *denominador, float x1, float x2, float y1, float y2) {
    *numerador = x1 * y1;
    *denominador = x2 * y2;
}

main() {
    float numerador, denominador, x1, x2, y1, y2, rAd, rSub, rDiv, rMult;
    x1 = x2 = y1 = y2 = 1;
    adicao(&numerador, &denominador, x1, x2, y1, y2);
    rAd = numerador/denominador;
    subtracao(&numerador, &denominador, x1, x2, y1, y2);
    rSub = numerador/denominador; 
    divisao(&numerador, &denominador, x1, x2, y1, y2);
    rDiv = numerador/denominador;
    multiplicacao(&numerador, &denominador, x1, x2, y1, y2);
    rMult = numerador/denominador;
    printf("O resultado da adiçao eh %f.\n O resultado da subtração eh %f\n. O resultado da Divisao eh %f\n. O resultado da Multiplicacao eh %f\n. O resultado da Divisao Racional eh %f.\n", rAd, rSub, rDiv, rMult);
}

