#include <stdio.h>
#include <stdlib.h>

void par(int numero)
{
    int i;
    for(i = 1; i <= numero; i++)
        if(i%2 == 0)
        printf("%d ", i);
}

void impar(int numero)
{
    int i;
    for(i = 1; i <= numero; i++)
        if(i%2 != 0)
        printf("%d ", i);
}

int main()
{
    int num;
    printf("Digite um numero qualquer:");
    scanf("%d", &num);
    printf("\nOs numeros pares: ");
    par(num);
    printf("\Os numeros impares: ");
    impar(num);
    return 0;
}
