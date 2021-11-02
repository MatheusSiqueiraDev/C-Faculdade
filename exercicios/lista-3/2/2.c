#include <stdio.h>
#include <stdlib.h>

float valorAbsoluto(float x) {
    if(x < 0) {
        x = -x;
    } 
    return x;
}

main() {
    float numero, resultado;
    printf("Informe o numero: ");
    scanf("%f", &numero);
    resultado = valorAbsoluto(numero);
    printf("O valor absoluto de %.2f eh %.2f", numero, resultado);
}