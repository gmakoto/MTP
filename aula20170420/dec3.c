#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int x, y , z, soma;
    srand(time(NULL));
    x = 1 + rand() % 6;
    y = 1 + rand() % 6;
    z = 1 + rand() % 6;
    soma = x + y + z;
    printf("Os tres numeros aleatorios sao: %d , %d , %d\n",x ,y , z);
    printf("A soma dos tres numeros aleatorios e: %d\n",soma);
    if(soma == 7 || soma == 11)
        printf("Voce Ganhou !!!!\n");
    else
        printf("Voce Perdeu!\n");

    return 0;

}
