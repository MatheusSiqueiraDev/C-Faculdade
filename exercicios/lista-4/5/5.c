#include <stdio.h>

int si(int p) {
    int ant1 = 1, ant2 = 1, prox = 0;
    for(int i = 4; i <= p; i++) {
        prox = ant1 + ant2;
        ant2 = ant1;
        ant1 = prox;
    }
    return prox;
}

main() {
    int posicao, resposta;
    printf("Informe a posicao que voce quer: ");
    scanf("%d", &posicao);
    resposta = si(posicao);
    printf("O numero e eh %d", resposta);    
}

