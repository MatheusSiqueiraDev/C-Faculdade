#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

main() {
    int *p;
    int i;
    i = 5;
    *p = i;
    p = (int*)malloc(sizeof(int));
    printf("i = %d\n", i);
    printf("&i = %d\n", &i);
    printf("p = %d\n", p);
    printf("&p = %d\n", &p);
    printf("*p = %d\n", *p);
    free(p);
}