// Matheus dos Santos Siqueira
// 25/10

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct _TPonto_{
float x;
float y;
};

typedef struct _TPonto_ TPonto;

void pi_MonteCarlo (int semente, int dardos, FILE * arquivo);
void transfereDeArquivoParaVetor (FILE * arquivo, TPonto v[], int tamanho);
float distancia (TPonto p);
int dardosNoQuartoDeCirculo (TPonto v[], int tamanho, float raio);
void criaLog (FILE * arquivo, TPonto v[], int pontosNoAlvo, int totalDePontos);

main(){

    FILE * arquivo;
    TPonto * pontos;
    int totalDeDardos, dardosNoAlvo, semente;

    printf("QUANTIDADE DE DARDOS: ");
    scanf("%d", &totalDeDardos);

    pontos = (TPonto *)malloc(sizeof(TPonto[totalDeDardos]));

    semente = time(NULL);

    pi_MonteCarlo (semente, totalDeDardos, arquivo);
    transfereDeArquivoParaVetor (arquivo, pontos, totalDeDardos);
    dardosNoAlvo = dardosNoQuartoDeCirculo(pontos, totalDeDardos, 1.0);
    criaLog(arquivo, pontos, dardosNoAlvo, totalDeDardos);

    free(pontos);
}
//Gera pontos em uma área correspondente a um quadrado de lado 1
//com vértices nos pontos (0,0) , (0,1) , (1,1) e (1,0).
//Grava esses pontos em um arquivo binário.
void pi_MonteCarlo (int semente, int dardos, FILE * arquivo){
    TPonto p;
    int i;
    //Abre um arquivo binário para escrita.
    arquivo = fopen("pontos.dat", "wb+");
    //Estabelece uma raiz para a geração de números aleatórios.
    srand(semente);
    for (i=0; i<dardos; i++)
    {
    //Sorteia valores de 0 a 1 para x e para y de um ponto.
    p.x = 1.0 * rand() / RAND_MAX;
    p.y = 1.0 * rand() / RAND_MAX;
    //Escreve um registro do tipo TPonto no aqruivo.
    fwrite(&p, sizeof(TPonto), 1, arquivo);
    }
    //Fecha o arquivo.
    fclose(arquivo);
}

void transfereDeArquivoParaVetor (FILE * arquivo, TPonto v[ ], int tamanho){
    TPonto p;
    int i;

    arquivo = fopen("pontos.dat", "r");
    printf("Tamanho: %d\n", tamanho);
    for(i = 0; i < tamanho; i++){
        fread(&p, sizeof(TPonto), 1, arquivo);
        printf("%f %f\n", p.x, p.y);
        v[i] = p;
    }

    fclose(arquivo);
}

float distancia (TPonto p){
    return (sqrt((p.x*p.x)+(p.y*p.y)));
}

int dardosNoQuartoDeCirculo (TPonto v[], int tamanho, float raio){
    float pi =  3.141592;
    float area = pi * (raio*raio) / 4;
    int number = 0, i;
    float resultado = 0;

    for(i = 0; i < tamanho; i++){
        resultado = distancia(v[i]);
        if(resultado <= area){
            number++;
        }
    }
    return number;
}

void criaLog (FILE * arquivo, TPonto v[], int pontosNoAlvo, int totalDePontos){
    arquivo=fopen("pontos.txt","w+");
    fprintf(arquivo,"Pontos Obtidos: \n");
    int i;
    for (i = 0; i < totalDePontos; i++){
        fprintf(arquivo,"( %f , %f )\n",v[i].x, v[i].y);
    }

    fprintf(arquivo, "\nTOTAL DE DARDOS ARREMESSADOS ---------------> %d", totalDePontos);
    fprintf(arquivo, "\nTOTAL DE DARDOS NO QUARTO DE CIRCULO --> %d", pontosNoAlvo);
    fprintf(arquivo, "\nVALOR ESTIMADO PARA PI ----------> 3.141592");
    fclose(arquivo);
}