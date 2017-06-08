#include <stdio.h>
#include <stdlib.h>
#define L 2
#define C 4

void imprimir(float M[L][C])
{
    int i, j;
    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            printf("%f\t", M[i][j]);
        }
        printf("\n");
    }
}

void transposta(float M[L][C])
{
    int i, j;
    for(i = 0; i < C; i++)
    {
        for(j = 0; j < L; j++)
        {
            printf("%f\t", M[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    float matriz [L][C];
    int i, j;
    for(i = 0; i < L; i++)
        for(j = 0; j < C; j++)
        {
            printf("Digite o valor do elemento [%d][%d] da matriz: ", i + 1 , j + 1);
            scanf("%f", &(matriz[i][j]));
        }
    imprimir(matriz);
    printf("\n\nA transposta da matriz acima fica:\n");
    transposta (matriz);
    return 0;
}
