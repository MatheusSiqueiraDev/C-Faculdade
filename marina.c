#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// QUESTÃO 1 

void menorMaior (int* numero1, int* numero2)  // ordem crescente 
{
    int x;

    if (*numero2 < *numero1) 
    {
        x = *numero1;
        *numero1 = *numero2;
        *numero2 = x; 
    }
}

//--------------------------------------------------------------------------------

// QUESTÃO 2

int quantidadeDeDivisores (int numero)  // quantidade de divisores de número
{
    int quantDiv;
    quantDiv = 0;

    for(int x = 1; x <= numero; ++x)
    {
        if(numero % x == 0)
        {
            ++quantDiv;
        }
    }

    return quantDiv;
}

//--------------------------------------------------------------------------------

// QUESTÃO 3 

int primo (int x) // números primos
{
    int resultado, i, quantDivisor;

    resultado = 0;
    i = 1;
    quantDivisor = 0;

    while (i <= x)
    {
        if(x % i == 0)
        {
            quantDivisor ++;
        }
    i ++;
    }


    if (quantDivisor == 2)
    {
        resultado = 1;
    }
    else{
        resultado = 0;
    }

    return resultado;
}

//----------------------------------------------------------------------------

// QUESTÃO 4 

int menorDivisorPrimo (int numero) // menor número primo divisor 
{
    int numPrimo;

    numPrimo = numero;

    for(int x = 1; x <= numero; ++x)
    {
        if(numero % x == 0)
        {
            if(primo(x) == 1)
            {
                if(x <= numPrimo)
                {
                    numPrimo = x;

                    if(numero == 1)
                    {
                        numPrimo = 1;
                    }
                }
            }
        }
    }

    return numPrimo;
}

//------------------------------------------------------------------------------

// QUESTÃO 5 


int mmc (int num1, int num2) // calcular mmc
{
    int x, y, aux, resultado;

    x = num1;
    y = num2;

    if(num1 == 1 && num2 == 1)
    {
        return 1;
    }
    
    do
    {
        aux = x % y;
        x = y;
        y = aux;

    }   while(aux != 0);
    
    resultado = (num1 * num2) / x;

    return resultado;
}





// Testes usando a função main

/*

main() // menorMaior
{
    int x, y, resultado;

    printf("\nDigite dois numeros: ");
    scanf("%d%d", &x, &y);

    menorMaior(&x, &y);

}


main() // quantidadeDeDivisores
{
    int numero, resultado;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    printf("\nA quantidade de divisores que o numero %d possui sao: %d.\n\n", numero, quantidadeDeDivisores(numero));
}



main() // primo
{
    int n1;

    printf("\nDigite um numero para saber se ele e um numero primo: ");
    scanf("%d", &n1);

    if(primo(n1) != 0)
    {
        printf("\nO numero e primo.\n\n");
    }
    else {
        printf("\nO numero nao e primo.\n\n");
    }
    
}


main() // menorDivisorPrimo
{
    int n1, final;

    printf("\nDigite um numero para obter seu menor divisor primo: ");
    scanf("%d", &n1);

    final = menorDivisorPrimo(n1);

    printf("\nO menor numero primo de %d e %d.\n\n", n1, final);
}


main() // mmc
{
    int n1, n2, final;

    printf("\nDigite dois numeros para obter seu mmc: \n");
    scanf("%d%d", &n1, &n2);

    final = mmc(n1, n2);

    printf("\nO mmc entre %d e %d e igual a: %d.\n\n", n1, n2, final);
}

*/

main()
{
    int x, y;

    x = (int*)malloc(sizeof(int));
    y = (int*)malloc(sizeof(int));


    printf("\nManipulacao de numeros inteiros...\n");
    printf("Entre com o 1o. numero: ");
    scanf("%d", &x);
    printf("Entre com o 2o. numero: ");
    scanf("%d", &y);

    menorMaior(&x, &y);

    printf("\nSaida...");
    printf("\nO menor numero entre %d e %d: %d", x, y, x);
    printf("\nO maior numero entre %d e %d: %d", x, y, y);


    printf("\nQuantidade de divisores de %d: %d", x, quantidadeDeDivisores(x));
    printf("\nQuantidade de divisores de %d: %d", y, quantidadeDeDivisores(y));

    if(primo(x))
    {
    printf("\nPrimalidade de %d: VERDADEIRO", x);
    }
    else{
        printf("\nPrimalidade de %d: FALSO", x);
    }

    if(primo(y))
    {
        printf("\nPrimalidade de %d: VERDADEIRO", y);
    }
    else{
        printf("\nPrimalidade de %d: FALSO", y);
    }
    
    printf("\nMenor divisor primo de %d: %d", x, menorDivisorPrimo(x));
    printf("\nMenor divisor primo de %d: %d", y, menorDivisorPrimo(y));

    printf("\nMenor multiplo comum entre %d e %d: %d\n\n", x, y, mmc(x, y));

}