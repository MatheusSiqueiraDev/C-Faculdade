#include <stdio.h>
#include <conio.h>

int anoBissexto(int ano) {
    int resultado = 0;
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) resultado = 1;
    return resultado;
}

main() {
    int n;
    printf("Forneca um ano: ");
    scanf("%d", &n);
    if(anoBissexto(n)) {
        printf("Este ano e bissexto.");
    } else {
        printf("Este ano nao e bissexto.");
    }
    getch();
}