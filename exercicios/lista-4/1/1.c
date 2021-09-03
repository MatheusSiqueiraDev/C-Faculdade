#include <stdio.h>

int piso(float n) {
    int i = 0;
    while (i < n)
    {
        i++;    
    }
    return i-1;
}

int teto(float n) {
    int i = 0;
    while (i <= n) 
    {
        i++;
    }
    return i;
    
}

main() {
  float numero;
  int resp1, resp2;

  printf("Informe o numero real: ");
  scanf("%f", &numero);
  resp1 = piso(numero);
  resp2 = teto(numero);
  printf("O piso do numero eh %d\nO teto do numero eh %d", resp1, resp2);
}