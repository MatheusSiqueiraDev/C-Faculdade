int anoBissexto(int ano) {
    int resultado = 0;
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
        resultado = 1;
    }
    return resultado;
}