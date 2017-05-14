#include <stdio.h>

int main()
{
    int vet[10], i, j, k = 9, l, aux;
    for(i = 0; i < 10; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &vet[i]);
    }
    for(j = 0; j < 5; j++)
    {
        aux = vet[j];
        vet[j] = vet[k];
        vet[k] = aux;
        k--;
    }
    printf("O vetor dos numeros digitados invertido fica:");
    for(l = 0; l < 10; l++)
        printf("%d ", vet[l]);
    return 0;
}
