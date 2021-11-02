#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    const int tam = 7;
    int i, face, faces[tam];
    printf("Quantidade de arremessos do dado: ");
    scanf("%d", &faces[0]);
    for(i = 1; i < tam; i++) {
        faces[i] = 0;
    }
    srand(time(NULL));
    for(i=1; 1 <= faces[0]; i++) {
        face = rand() % 6 + 1;
        faces[face] = faces[face] + 1;
    }
    printf("\nPercentual de faces arremessadas: \n");
    for(i = 1; i < tam; i++) {
        printf("%d = %f\n", i, 100.0*faces[i]/faces[0]);
    }
    printf("\n");
    system("pause");
}