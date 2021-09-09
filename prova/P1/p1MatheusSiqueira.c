// Matheus dos Santos Siqueira
// 06/09

#include <stdio.h>
#include <stdlib.h>

void menorMaior(int* n1, int* n2) {
    int guardarValor;
    if(*n1 < *n2) {
        guardarValor = *n1;
        *n1 = *n2;
        *n2 = guardarValor;
    }
}

int quantidadeDeDivisores(int n) {
    int quantDivo = 0;
    for(int i = 1; i <= n; i++) {
        if(n%i == 0) {
            quantDivo++;
        }
    }
    return quantDivo;
}

int primo(int n) {
    if(quantidadeDeDivisores(n) == 2) {
        return 1;
    }
    return 0;
}

int menorDivisorPrimo(int n) {
    int nPrimo = n;
    for(int i = 1; i <= n; i++) {
        if(n%i == 0) {
            if(primo(i) == 1) {
                if (i <= nPrimo) {
                    nPrimo = i;
                }
            }
        }
    }
    return nPrimo;
}

int mmc(int n1, int n2) {
    int resultado, menor1 = n1, menor2 = n2;
    while (resultado != 0)
    {
        resultado = menor1 % menor2;
        menor1 = menor2;
        menor2 = resultado;
    }
    return (n1 * n2)/menor1;
}

main() {
    int * numero1;
    int * numero2;
    int quantidadeDivisores1, quantidadeDivisores2, menorDivisor1, menorDivisor2, resultadoMmc;
    char * respPrimoString1;
    char *  respPrimoString2;
    numero1 = (int*)malloc(sizeof(int));
    numero2 = (int*)malloc(sizeof(int));
    respPrimoString1 = (char*)malloc(sizeof(char));
    respPrimoString2 = (char*)malloc(sizeof(char));
    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
    menorMaior(&numero1, &numero2);
    quantidadeDivisores1 = quantidadeDeDivisores(numero1);
    quantidadeDivisores2 = quantidadeDeDivisores(numero2);
    menorDivisor1 = menorDivisorPrimo(numero1);
    menorDivisor2 = menorDivisorPrimo(numero2);
    resultadoMmc = mmc(numero1, numero2);
    if(primo(numero1) == 1) {
        respPrimoString1 = "Verdadeiro";
    } else {
        respPrimoString1 = "Falso";
    }
    if(primo(numero2) == 1) {
        respPrimoString2 = "Verdadeiro";
    } else {
        respPrimoString2 = "Falso";
    }
    printf("O maior numero entre %d e %d eh: %d\n", numero1, numero2, numero1);
    printf("O mmenor numero entre %d e %d eh: %d\n", numero1, numero2, numero2);
    printf("Quantidade de divisores de %d: %d\n", numero1, quantidadeDivisores1);
    printf("Quantidade de divisores de %d: %d\n", numero2, quantidadeDivisores2);
    printf("Primalidade de %d: %s\n", numero1, respPrimoString1);
    printf("Primalidade de %d: %s\n", numero2, respPrimoString2);
    printf("Menor divisor primo de %d: %d\n", numero1, menorDivisor1);
    printf("Menor divisor primo de %d: %d\n", numero2, menorDivisor2);
    printf("Menor divisor comum entre %d e %d eh: %d\n", numero1, numero2, resultadoMmc);
    free(numero1);
    free(numero2);
    free(respPrimoString1);
    free(respPrimoString2);
}