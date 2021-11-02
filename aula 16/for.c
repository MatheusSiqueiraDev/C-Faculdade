#include <stdio.h>
#include <conio.h>

int somaNaturais(int x) {
    int i, soma = 0;
    for(i = 1; i <= x; i = i + 1) {
        soma = soma + i;
    }
    return soma;
}

main() {
    int n;
    printf("Soma dos N primeiro numeors naturais\n");
    printf("Forneca o numero natural N: ");
    scanf("%d", &n);
    if(n >= 0)
        printf("A soma dos numero naturais ate %d e %d.", n, somaNaturais(n));
    else 
        printf("%d nao e um nuemro natural.", n);
    getchar();
}