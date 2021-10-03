#include <stdio.h>
#include <stdlib.h>

main() {
    int * vetor;
    int i, I;
    printf("Numero de colunas: ");
    scanf("%d", &I);
    vetor = (int *)malloc(sizeof(int[I]));
    for(i = 0; i < I; i = i + 1) {
        vetor[i] = i;
        printf("%d", vetor[i]);
    }
    free(vetor);

    int ** matriz;
    int i, j, I, J;
    printf("Numero de linha: ");
    scanf("%d", &I);
    printf("Numero de colunas: ");
    scanf("%d", &J);
    matriz = (int **)malloc(sizeof(int* [I]));
    for(i = 0; i < I; i++) {
        matriz[i] = (int *)malloc(sizeof(int[J]));
    }
    for(i = 0; i < I; i++) {
        for(j = 0; j < J; j++) {
            matriz[i][j] = i + j;
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < I; i++) {
        free(matriz[i]);
    }
    free(matriz);
}