#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 5

float media (float vetor[M])
{
    int i;
    float media, soma = 0;
    for (i = 0; i < M; i++)
        soma = soma + vetor[i];
    media = soma/M;
    return media;
}

void desviopadrao (float vetor[M] , float med)
{
    int i;
    float desvio, soma = 0;
    for (i = 0; i < M; i++)
        soma = soma + pow((vetor[i] - med) , 2);
    desvio = sqrt (soma) / sqrt ((M - 1));
    printf("Desvio padrao = %.4f" , desvio);
}

int main ()
{
    float vet[M], flag;
    int a;
    for(a = 0; a < M; a++)
    {
        printf("Digite um numero:");
        scanf("%f" , &(vet[a]));
    }
    printf("\n");
    flag = media(vet);
    printf("Media = %.4f" , flag);
    desviopadrao(vet, flag);
    printf("\n");
    return 0;
}
