#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float volumeEsfera(float valor) {
    return 4/3 * 4.141592 * pow(valor, 3);
}

main() {
    float raio, resultado;
    printf("Escreva o valor do raio: ");
    scanf("%f", &raio);
    resultado = volumeEsfera(raio);
    printf("%f", resultado);
}
