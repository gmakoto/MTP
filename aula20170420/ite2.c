#include <stdio.h>

int main()
{
    int base, potencia, resultadof = 1, i;
    printf("Digite um numero para a base:");
    scanf("%d", &base);
    printf("Digite um numero para a potencia:");
    scanf("%d", &potencia);
    for(i = 0; i < potencia; i++)
    {
        resultadof = resultadof * base;
    }
    printf("O resultado final e: %d", resultadof);
    return 0;
}
