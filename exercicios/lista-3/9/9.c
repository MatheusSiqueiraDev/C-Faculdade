#include <stdio.h>
#include <stdlib.h>

char* mes(int n) {
    switch (n)
    {
    case 1:
        return "Janeiro";
    case 2:
        return "Fevereiro";
    case 3:
        return "Marco";
    case 4:
        return "Abril";
    case 5:
        return "Maio";
    case 6:
        return "Junho";
    case 7:
        return "Julho";
    case 8:
        return "Agosto";
    case 9:
        return "Setembro";
    case 10:
        return "Outubro";
    case 11:
        return "Novembro";
    case 12:
        return "Dezembro";
    default:
        return "Mes invalidado";
    }
}
 
main() {
    int numero;
    char* valorMes;

    valorMes = (char*)malloc(sizeof(char));
    printf("Informe um numero: ");
    scanf("%d", &numero);
    valorMes = mes(numero);
    printf("O %d equivale ao mes %s", numero, valorMes);
}