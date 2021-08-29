#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehVogal(char caractere) {
    if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' || caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ) {
        return true;
    }
    return false;
}

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

bool ehLetra(char caractere) {
    if(ehMinuscula(caractere) || ehMaiuscula(caractere)) {
        return true;
    }
    return false;
}

bool ehConsoante(char caractere) {
    if(ehLetra(caractere) && !ehVogal(caractere)) {
        return true;
    }
    return false;
}

bool ehAlgarismo(char caractere) {
    if(caractere == '1' || caractere == '2' || caractere == '3' || caractere == '4' || caractere == '5' || caractere == '6' || caractere == '7' || caractere == '8' || caractere == '9' || caractere == '0') {
        return true;
    }
    return false;
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