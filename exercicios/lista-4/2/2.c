#include <stdio.h>

float potenciaCalc(float b, int p) {
    int i;
    float r = 1;
    for(i = 1; i <= p; i++) {
        r = r * b;
    }
    return r;
}

main() {
   float base, resp;
   int potencia;
   printf("Informe a base: ");
   scanf("%f", &base);
   printf("Informe a potencia");
   scanf("%d", &potencia);
   resp = potenciaCalc(base, potencia);
   printf("A potencia do numero eh: %f", resp);
}