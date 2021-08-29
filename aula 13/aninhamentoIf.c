int quantidadeDeDias(int mes, int ano) {
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return 31;
    } else {
        if(mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            return 30;
        } else {
            if (mes == 2) {
                if(anoBissexto(ano)) {
                    return 29;
                } else {
                    return 28;
                }
            } else {
                return 0;
            }
        }
    }
}