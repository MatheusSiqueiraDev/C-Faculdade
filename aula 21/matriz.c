void cripto(char * texto) {
    int i, j, k, ordem = (int)ceil(sqrt(strlen(texto)));
    char m[ordem][ordem];

    for (i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
            m[i][j];
        }
    }

    k = 0;

    for(i = 0; i < ordem; i = i + 1) {
        for(j = 0; j < ordem; j = j + 1) {
            if(k < strlen(texto)) {
                m[i][j] = texto[k];
                k = k + 1;
            } else {
                i = j = ordem;
            }
        }
    }
}