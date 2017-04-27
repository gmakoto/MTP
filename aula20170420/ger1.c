#include <stdio.h>

int main()
{
    int cont = 0, numero, i;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for(i = 1; i <= numero; i++)
    {
        if(numero % i == 0)
            cont++;
    }
    if(cont == 2)
        printf("O numero digitado e' primo.");
        else
        printf("O numero digitado nao e' primo.");
    return 0;
}
