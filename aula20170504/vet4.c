#include <stdio.h>
#include <time.h>

int main()
{
    unsigned int numero;
    long int vet[1000];
    int i, j, k;
    int max = 0, min = 9;
    srand(time(0));
    printf("Digite um numero para ser a a capacidade de um vetor:\n");
    scanf("%d", &numero);
    for(i = 0; i < numero; i++)
    {
        vet[i] = rand() % 10;
    }
    for(j = 0; j < numero; j++)
    {
        if(vet[j] >= max)
        max = vet[j];
    }
    for(k = 0; k < numero; k++)
    {
        if(vet[k] <= min)
        min = vet[k];
    }
    printf("O maximo do vetor com numeros aleatorios de tamanho %d e': %d\n" , numero, max);
    printf("O minimo do vetor com numeros aleatorios de tamanho %d e': %d\n" , numero, min);
    return 0;
}

