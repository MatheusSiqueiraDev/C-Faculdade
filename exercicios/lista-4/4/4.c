#include <stdio.h>

int fatorial(int n) {
    int resp = 1;
    for(int i = n; i > 0; i--) {
        resp = i * resp;
    }
    return resp;
}

main() {
    int numero, resposta;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    resposta = fatorial(numero);
    printf("Fatorial de %d eh %d", numero, resposta);
}