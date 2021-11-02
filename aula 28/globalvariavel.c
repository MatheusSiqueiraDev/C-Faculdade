#include <stdio.h>
#include <conio.h>

enum TMes {
    Janeiro=1,
    Fevereiro,
    Marco,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro
};

struct TData {
    int dia;
    enum TMes mes;
    int ano;
};

int AnoBissexto (int ano) {
    if(ano%4==0 && ano%100!=0 || ano%400 == 0)
        return(1);
    else 
        return(0);
}

char * TMesParaTexto(enum TMes mes) {
    switch (mes)
    {
    case Janeiro: return ("Janeiro");
    case Fevereiro: return("Fevereiro");
    case Marco: return("Marco");
    case Dezembro: return("Dezembro"); 
}

int ValidaData(struct TData data) {
    switch (data.mes)
    {
    case Janeiro:
    case Marco:
    case Maio:
    case Julho:
    case Agosto:
    case Outubro:
    case Dezembro: 
        if(data.dia <= 31) {
            return(1);
        } else {
            return(0);
        }
    case Abril:
    case Junho:
    case Setembro:
    case Novembro:
        if(data.dia <= 30) {
            return(1);
        } else {
            return(0);
        }
    case Fevereiro:
        if(AnoBissexto(data.ano)) {
            if(data.dia <= 29) {
                return(1);
            } else {
                return(0);
            }
        }
        else {
            if(data.dia <= 28) {
                return(1);
            } else {
                return (0);
            }
        }
    default: return(0);
    }
}

main() {
    struct TPessoa {
        char nome[80];
        struct TData dataDeNascimento;
    };
    struct TPessoa pessoa;
    printf("Informe o seu nome: ");
    gets(pessoa.nome);
    prinft("%s, informe sua data de nascimenbto no formato dd/mm/aaaa: ", pessoa.nome);
    scanf("%d%d%d", &pessoa.dataDeNascimento.dia, &pessoa.dataDeNascimento.mes, &pessoa.dataDeNascimento.ano);
    if(ValidaData(pessoa.dataDeNascimento)) {
        printf("Voce nasceu em %d de %s de %d.", pessoa.dataDeNascimento.dia, TMesParaTexto(pessoa.dataDeNascimento.mes), pessoa.dataDeNascimento,ano);
    } else {
        printf("A data fornecida e invalida. O programa sera fechado.");
    }
    getch();
}