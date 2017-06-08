#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media (float *vetor, int tamanho)
{
    int i;
    float media, soma = 0;
    for (i = 0; i < tamanho; i++)
        soma = soma + vetor[i];
    media = soma/tamanho;
    return media;
}

void desviopadrao (float *vetor ,int tamanho, float med)
{
    int i;
    float desvio, soma = 0;
    for (i = 0; i < tamanho; i++)
        soma = soma + pow((vetor[i] - med) , 2);
    desvio = sqrt (soma) / sqrt ((tamanho - 1));
    printf("Desvio padrao = %.4f" , desvio);
}

int main()
{
    float *vetor;
    float flag;
    int qtde, a;
    printf("Quantos numeros deseja entrar:");
    scanf("%d", &qtde);
    vetor = (float *) malloc(qtde*sizeof(float));
    for(a = 0; a < qtde; a++)
    {
        printf("Digite um numero:");
        scanf("%f" , &(vetor[a]));
    }
    printf("\n");
    flag = media(vetor, qtde);
    printf("Media = %.4f\n\n" , flag);
    desviopadrao(vetor, qtde, flag);
    printf("\n");
    return 0;
}
