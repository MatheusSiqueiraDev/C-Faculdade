#include <stdio.h> 
#include <stdlib.h>

void imprimirTexto(char *);

main() {
    char * texto;

    texto = (char*)malloc(sizeof(char));

    printf("Informe o seu texto: ");
    gets(texto);

    imprimirTexto(texto);

    free(texto);

}
void imprimirTexto(char * t) {
    printf("Seu texto e: \n%s", t);
}