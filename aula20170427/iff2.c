#include <stdio.h>

int main()
{
    int numero, i;
    float soma1 = 0;
    double soma2 = 0;
    printf("Digite um numero inteiro:");
    scanf("%d" , &numero);
    for(i = 0; i < 729; i++)
        soma1 = soma1 + 1/(float)numero;
    for(i = 0; i < 729; i++)
        soma2 = soma2 + 1/(double)numero;
    printf("\nA soma em float e': %.15f\n", soma1);
    printf("A soma em double e': %.15f\n", soma2);
    return 0;
}
