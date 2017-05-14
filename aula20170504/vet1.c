#include <stdio.h>
#include <time.h>

int main()
{
    int i;
    unsigned int numero;
    float vet[1000], media, soma = 0;
    srand(time(0));
    printf("Digite um numero nao negativo:");
    scanf("%d", &numero);
    for(i = 0; i < 1000; i++)
    {
        vet[i] = (rand() % numero) + 1;
        soma = soma + vet[i];
    }
    media = soma/ 1000;
    printf("A media dos numeros aleatorios e': %f", media);
    return 0;
}
