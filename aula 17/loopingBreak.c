#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main() {
    char opcao;
    while (1) {
        system("cls");
        printf("Deseja repetir o programa: [S|N]: ");
        scanf("\n%c", &opcao);
        if(opcao == 'n' || opcao == 'N') break;
    }
    system("pause");
}