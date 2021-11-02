main() {
    struct TPessoa {
        char * nome;
        struct TData {
            int dia;
            int mes;
            int ano;
        } nascimento;
    } * pessoa;  

    pessoa = (struct TPessoa *)malloc(sizeof(struct TPessoa));
    pessoa->nome = (char*)malloc(sizeof(char));
    //(*pessoa).nome = (char*)malloc(sizeof(char))

    printf("Nome: ");
    gets(pessoa->nome);
    // gets((*pessoa).nome)

    printf("%s", pessoa->nome);
    //printf("%s", (*pessoa).nome)

    free(pessoa->nome);
    free(pessoa);
}

