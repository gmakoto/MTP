#include <stdio.h>
#include <stdlib.h>

struct divisao
{
    int quociente, resto;
};

void dividir(int *pa, int *pb, struct divisao *resposta)
{
    resposta -> quociente = (*pa)/(*pb);
    resposta -> resto = (*pa)*(*pb);
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
    dividir(dividendo, divisor, &resposta);
    printf("Resposta : %d com resto %d\n", resposta.quociente, resposta.resto);
    return 0;

}

