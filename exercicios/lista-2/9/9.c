#include <stdio.h>
#include <stdlib.h>

void pontoMedio(float *ab, float *ord, int xIni, int yIni, int xFin, int yFin) {
    *ab = (xIni + xFin)/2;
    *ord = (yIni + yFin)/2;
}

main() {
    float abscissa;
    float ordernada;
    int xInicial, yInicial, xFinal, yFinal;
    xInicial = 2;
    yInicial = 1;
    xFinal = 7;
    yFinal = 6;
    pontoMedio(&abscissa, &ordernada, xInicial, yInicial, xFinal, yFinal);
    printf("O valor da abscissa eh %f e o valor da ordenada eh %f", abscissa, ordernada);
}