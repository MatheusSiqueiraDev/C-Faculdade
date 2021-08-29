#include <stdio.h>
#include <stdbool.h>

bool triangulo(float x1, float x2, float x3) {
    if(x1 < (x2 + x3) && x2 < (x1 + x3) && x3 < (x1 + x2)) {
        return true;
    }
    return false;
}

int tipoDeTriangulo(float x1, float x2, float x3) {
    if(triangulo(x1, x2, x3)) {
        return 0;
    } else {
        if(x1 == x2 && x2 == x3) {
        return 3;
        } else {
            if (x1 == x2 || x2 == x3 || x1 == x3) {
                return 2;
            } else {
                return 1;
            }
        }
    }
    
}

main() {
    float lado1, lado2, lado3;
    printf("Informe o lado 1 do triangulo: ");
    scanf("%f", &lado1);
    printf("Informe o lado 2 do triangulo: ");
    scanf("%f", &lado2);
    printf("Informe o lado 3 do triangulo: ");
    scanf("%f", &lado3);
    if(triangulo(lado1, lado2, lado3)) {
        printf("Eh triangulo");
    } 

    switch (tipoDeTriangulo(lado1, lado2, lado3)) {
    case 0:
        return printf("Nao e triangulo");
    case 1:
        return printf("Escaleno");
    case 2: 
        return printf("Isosceles");
    case 4:
        return printf("Equilatero");
    }
}