#include <stdio.h>

void divisivel(int x1, int x2) {
    if(x1%x2 == 0) {
        printf("Eh divisivel\n");
    } else {
        printf("Nao eh divisivel\n");
    }
    if(x1%2 == 0) {
        printf("%d eh par", x1);
    } else {
        printf("%d eh impar", x1);
    }
}

main() {
    int valor1, valor2;
    printf("Informe o valor 1: ");
    scanf("%d", &valor1);
    printf("Informe o valor 2: ");
    scanf("%d", &valor2);
    divisivel(valor1, valor2);
}