#include <stdio.h>
#include <stdlib.h>


struct soma
{
    int num, dem;
};

struct soma somar(int a1, int b1, int a2, int b2)
{
    struct soma resposta;
    resposta.num = (b2*a1) + (b1*a2);
    resposta.dem = (b1*b2);
    return resposta;
};

int main()
{
    struct soma resposta;
    int numerador1, denominador1, numerador2, denominador2;
    printf("Entre com o numerador da primeira fracao: ");
    scanf("%d", &numerador1);
    printf("Entre com o denominador da primeira fracao: ");
    scanf("%d", &denominador1);
    printf("Entre com o numerador da segunda fracao: ");
    scanf("%d", &numerador2);
    printf("Entre com o denominador da primeira fracao: ");
    scanf("%d", &denominador2);
    resposta = somar(numerador1, denominador1, numerador2, denominador2);
    printf("A soma entre os dois numeros racionais fica: %d / %d", resposta.num, resposta.dem);
    return 0;
}
