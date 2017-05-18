#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PREENCHER(min,max) \
( min + (max - min)*rand()/(float)RAND_MAX )

struct Ponto
{
    float x;
    float y;
    float z;
};
int main()
{
    struct Ponto vetor[1000];
    srand(time(NULL));
    int numero, i, j;
    float mediax = 0.0, mediay = 0.0, mediaz = 0.0;
    for(i = 0; i < 1000; i++)
    {
        vetor[i].x = PREENCHER(-10.0 , 10.0);
        vetor[i].y = PREENCHER(-10.0 , 10.0);
        vetor[i].z = PREENCHER(-10.0 , 10.0);
    }
    printf("Digite um numero entre 10 e 1000:");
    scanf("%d", &numero);
    for(j = 0; j < numero; j++)
    {
        mediax = mediax + vetor[j].x;
        mediay = mediay + vetor[j].y;
        mediaz = mediaz + vetor[j].z;
    }
    printf("\nO centro de massa e': (%f , %f, %f)", (mediax/numero), (mediay/numero), (mediaz/numero) );
    return 0;
}


