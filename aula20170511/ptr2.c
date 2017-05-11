#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[] = {0,1,2,4,8};
    unsigned char *p;
    int i, soma = 0, j;
    p = (unsigned char *) vetor;
    for(i = 0; i < sizeof(vetor) ; i++)
    {
        if(p[i]  == 0)
            soma++;
    }
    printf("Numero de bytes igual a: %d\n", soma);
    for(j = 0; j < sizeof(vetor) ; j++)
    {
        printf("Em: %p  | Contem : %u\n", p[j], p[j]);
    }
    return 0;
}
