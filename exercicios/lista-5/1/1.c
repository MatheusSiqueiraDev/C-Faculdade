#include <stdio.h>
#include <stdlib.h>

void inverteVetor(int v[]) {
    
}

void invertePonteiro(int * p) {

}

main() {
    int * vetorPonteiro;
    int vetor[7], i;

    vetorPonteiro = (int *)malloc(sizeof(int[7]));
    // Inserindo dados no Vetor
    for(i = 0; i < 7; i++) {
        printf("Informe o valor do %d elemento: ", i);
        scanf("%d", &vetor[i]);
    }  
    // Inserindo dados no Ponteiro
    for(i = 0; i < 7; i++) {
        printf("Informe o valor do %d elemento: ", i);
        scanf("%d", &vetorPonteiro[i]);
    }  
    free(vetorPonteiro);
}