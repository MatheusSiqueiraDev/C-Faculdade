#include <stdio.h>
#include <math.h>

int calcImc(float p, float a) {
    float resultado;
    resultado = p/pow(a, 2);
    if(resultado >= 40) {
        return 4;
    } else if(resultado >= 35) {
        return 3;
    } else if(resultado >= 30) {
        return 2;
    } else if(resultado >= 25) {
        return 1;
    } else {
        return 0;
    }
}

main() {
    float peso, altura;
    printf("Informe seu peso: ");
    scanf("%f", &peso);
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    switch (calcImc(peso, altura)) {
    case 0:
        return printf("Ausente de Obsesidade");
    case 1:
        return printf("Sobrepeso");
    case 2:
        return printf("Obesidade grau 1");
    case 3:
        return printf("Obsedidade grau 2");
    case 4:
        return printf("Obesidade Morbida");
    default:
        return printf("Valor invalido");
    }
}