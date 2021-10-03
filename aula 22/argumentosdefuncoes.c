int somaElementosDeVetor(int vetor[], int colunas) {
    int i, soma = 0;
    for(i = 0; i < colunas; i++) {
        soma = soma + vetor[i];
    }
    return soma;
}

main() {
    const int N = 4;
    int v[N], i;
    for(i = 0; i < N; i++) {
        v[i] = i;
    }
    printf("Soma dos elementos do vetor: %d", somaElementosDeVetor(v, N));
}