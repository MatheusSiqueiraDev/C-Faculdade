#include <stdio.h>
#include <stdbool.h>

bool primo(int n) {
    int i;
    int quantPrimo = 0;
    for(i = 1; i <= n; i++) {
        if(n%i == 0) {
            quantPrimo++;
        }
    }
    if(quantPrimo == 2) {
        return true;
    }
    return false;
}

main() {
    int numero;
    bool resp;
    printf("Informe o numero: ");
    scanf("%d", &numero);
    resp = primo(numero);
    if(resp == true) {
        printf("E primo");
    } else {
        printf("Nao eh primo");
    }
}