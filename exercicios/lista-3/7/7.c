#include <stdio.h>
#include <stdbool.h>

bool ehMinuscula(char caractere) {
    if('a' <= caractere && caractere <= 'z') {
        return true;
    } 
    return false;
}

bool ehMaiuscula(char caractere) {
    if('A' <= caractere && caractere <= 'Z') {
        return true;
    }
    return false;
}

int posicaoAlfabeto(char c) {
    if(ehMinuscula(c)) {
        return c - 96;
    } else {
        return c - 64;
    }    
    return false;
}

main() {
    char caractere;
    int posicao;
    printf("Informe o valor do caractere: ");
    caractere = getchar();
    if(ehMaiuscula(caractere) || ehMinuscula(caractere)) {
        posicao = posicaoAlfabeto(caractere);
        printf("A posicao da letra %c eh %d", caractere, posicao);
    } else {
        printf("Nao eh letra");
    }
}