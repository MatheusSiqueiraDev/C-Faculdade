#include <stdio.h>
#include <stdlib.h>

void inscricao(char *, int, int, int, float, char);

main() {
    char * nome;
    int dia, mes, ano;
    float salario;
    char resposta;

    nome = (char*)malloc(sizeof(char));

    printf("Informe seu nome: ");
    gets(nome);
    printf("Informe o dia do seu nascimento: ");
    scanf("%d", &dia);
    printf("Agore informe o mes que voce nasceu: ");
    scanf("%d", &mes);
    printf("Para finalizar, me informe o ano: ");
    scanf("%d", &ano);
    printf("Qual e o seu salario atual? ");
    scanf("%f", &salario);
    printf("Voce e chefe na sua empresa atual? [S]im ou [N]ao? ");
    scanf("\n");
    resposta = getchar();

    inscricao(nome, dia, mes, ano, salario, resposta);

    free(nome);
}

void inscricao(char * n, int d, int m, int a, float s, char r) {
    printf("O %s nasceu em %d/%d/%d. Seu salario atual e de %.2f. Ele e chefe atualmente: %c.", n, d, m, a, s, r);
}