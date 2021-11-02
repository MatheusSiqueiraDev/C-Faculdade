#include <stdio.h> // Para usar printf, scanf e getchar
#include <stdlib.h> // para usar malloc, free e gets

void consolidado (char *, char, int, float, float);

main() {
    char * nome; // Variável do tipo texto
    char sexo; // Variável do tipo caractere
    int idade; // Variável do tipo Inteiro
    float peso, altura; // Variáveis do tipo real

    nome = (char*)malloc(sizeof(char));

    printf("Nome: ");
    gets(nome); // Leitura de texto
    printf("Sexo? [M]asculino ou [F]eminino: ");
    sexo = getchar(); // Leitura de Caractere
    printf("Idade: ");
    scanf("%d", &idade); // Leitura de número
    printf("Peso (em quilos): ");
    scanf("%f", &peso); // Leitura de número
    printf("Altura (em metros): ");
    scanf("%f", &altura); // Leitura de número

    consolidado(nome, sexo, idade, peso, altura);

    free(nome);
}

void consolidado (char * n, char s, int i, float p, float a) {
    printf("%s, sexo %c, possui %d anos, pesa %.2f quilos e mede %f metros.\n", n, s, i, p, a);
}
