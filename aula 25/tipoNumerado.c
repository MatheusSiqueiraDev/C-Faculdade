#include <stdio.h>
#include <conio.h>

enum TNaipe {
    paus = 1,
    ouros,
    espadas, 
    copas
};  

char * TnaipeParaTexto(enum TNaipe n) {
    switch(n) {
        case paus:return"PAUS";
        case ouros:return"OUROS";
        case espadas:return"ESPADAS";
        case copas:return"COPAS";
    }
}


main() {
    int i;
    enum TNaipe naipe;

    printf("Forneca o numero associado ao naipe de sua escolha... \n");
    printf("1 - paus \n");
    printf("2 - ouros\n");
    printf("3 - espadas \n");
    printf("4 - copas\n");
    printf("Sua escolha: ");
    scanf("%d", &i);

    if(i >= 1 && i <= 4) {
        naipe = (enum TNaipe)i;
        printf("Voce escolheu o naipe %s.", TnaipeParaTexto(naipe));
    } else {
        printf("Naipe Invalido");
    }
    getch();
}