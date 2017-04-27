#include <stdio.h>

int main()
{
    int soma = 0, i, numero;
    printf("Digite um numero qualquer:");
    scanf("%d", &numero);
    for(i = 1; i < numero; i++)
    {
        if(numero % i == 0)
            soma = soma + i;
    }
    if(soma == numero)
        printf("O numero e' perfeito.");
        else
        printf("O numero nao e' perfeito.");
    return 0;
}
