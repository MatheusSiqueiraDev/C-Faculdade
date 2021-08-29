main() {
    int valor1, valor2, resultado;
    char operacao;
    printf("Informe o valor 1: ");
    scanf("%d", &valor1);
    printf("Informe o valor 2: ");
    scanf("%d", &valor2);
    printf("Informe o tipo de operacao [+, -, *, x, X, /, :]: ");
    scanf("\n");
    operacao = getchar();
    switch (operacao) {
    case '+':
        resultado = valor1 + valor2;
        return printf("%d", resultado);
    case '*':
    case 'x':
    case 'X':
        resultado = valor1 * valor2;
        return printf("%d", resultado);
    case '-':
        resultado = valor1 - valor2;
        return printf("%d", resultado);
    case '/':
    case ':':
        resultado = valor1 / valor2;
        return printf("%d", resultado);
    default:
        return printf("Valor invalidado");
    }
}