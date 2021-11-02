#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehVogal(char caractere) {
   return caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' || caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u'?true:false;
}

bool ehMinuscula(char caractere) {
    return 'a' <= caractere && caractere <= 'z'?true:false;
}

bool ehMaiuscula(char caractere) {
    return 'A' <= caractere && caractere <= 'Z'?true:false;
}

bool ehLetra(char caractere) {
    return ehMinuscula(caractere) || ehMaiuscula(caractere)?true:false;
}

bool ehConsoante(char caractere) {
    return ehLetra(caractere) && !ehVogal(caractere)?true:false;
}

bool ehAlgarismo(char caractere) {
    return caractere == '1' || caractere == '2' || caractere == '3' || caractere == '4' || caractere == '5' || caractere == '6' || caractere == '7' || caractere == '8' || caractere == '9' || caractere == '0'?true:false;
}

main() {
    char valor;
    printf("Informe um caractere: ");
    valor = getchar();
    if(ehVogal(valor)) {
        printf("Eh vogal\n");
    } else {
        printf("Nao eh vogal\n");
    }
    if(ehMinuscula(valor)) {
        printf("Eh minuscula\n");
    } else {
        printf("Nao eh minuscula\n");
    }
    if(ehMaiuscula(valor)) {
        printf("Eh maiuscula\n");
    } else {
        printf("Nao eh maiuscula\n");
    }
    if(ehLetra(valor)) {
        printf("Eh uma letra\n");
    } else {
        printf("Nao eh uma letra\n");
    }
    if(ehConsoante(valor)) {
        printf("Eh consoante\n");
    } else {
        printf("Nao eh consoante\n");
    }
    if(ehAlgarismo(valor)) {
        printf("Eh algarismo\n");
    } else {
        printf("Nao eh algarismo\n");
    }
}