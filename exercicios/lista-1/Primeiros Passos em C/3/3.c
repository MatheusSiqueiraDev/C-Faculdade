// Matheus Siqueira 26/07/2021

#include <stdio.h>
#include <stdlib.h>

void nomeSobrenome(char *, char *);

main() {
    char * nome;
    char * sobrenome;

    nome = (char*)malloc(sizeof(char));
    sobrenome = (char*)malloc(sizeof(char));
    printf("Informe seu nome: ");
    gets(nome);
    printf("Informe seu sobrenome: ");
    gets(sobrenome);

    nomeSobrenome(sobrenome, nome);

    free(nome);
    free(sobrenome);
}

void nomeSobrenome(char * s, char * n) {
    printf("%s, %s", s, n);
}