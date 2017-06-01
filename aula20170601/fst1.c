#include <stdio.h>
#include <stdlib.h>


struct divisao
{
    int quociente, resto;
};

struct divisao dividir(int a, int b)
{
    struct divisao resposta;
    resposta.quociente = a/b;
    resposta.resto = a%b;
    return resposta;
};

int main()
{
    struct divisao resposta;
    int dividendo, divisor;
    printf("Entre com o dividendo: ");
    scanf("%d" , &dividendo);
    printf("Entre com o divisor: ");
    scanf("%d" , &divisor);
    resposta = dividir(dividendo, divisor);
    printf("Resposta : %d com resto %d\n", resposta.quociente, resposta.resto);

}
