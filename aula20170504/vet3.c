#include <stdio.h>

int main()
{
    int vet[10], i,j , k ,soma = 0, produto = 1;
    for(i = 0; i < 10; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &vet[i]);
    }
    for(j = 0; j < 10; j++)
        soma = soma + vet[j];
    for(k = 0; k < 10; k++)
        produto = produto * vet[k];
    printf("\nA somatoria dos numeros digitados e': %d ", soma);
    printf("\nO produto dos numeros digitados e': %d ", produto);
    return 0;
}
