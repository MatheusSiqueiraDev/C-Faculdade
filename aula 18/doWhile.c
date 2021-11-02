#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main() {
    float N1, N2, MEDIA;
    char RESP;

    do {
        system("cls");
        printf("Programa para calcular a media entre dois numeros: \n\n");
        printf("Digite os dois numeros separados por espaco: ");
        scanf("%f %f", &N1, &N2);
        MEDIA = (N1+N2)/2;
        printf("A media entre %f e %f e %f. \n\n", N1, N2, MEDIA);
        printf("Deseja repetir o programa? Entre [S] para sim ou outra tecdla para nao: ");
        scanf("\n%c", &RESP);
    } while ((RESP == 'S') || (RESP == 's'));
}