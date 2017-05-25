#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteio(int numero)
{
    int i;
    i = (rand() % 10) + 1;
    return i;
}

int main()
{
    int j, num, flag = 0, k;
    srand(time(0));
    printf("Digite um numero:");
    scanf("%d" , &num);
    printf("\nDigite ENTER para realizar o sorteio.");
    getchar();
    do
    {
        getchar();
        k = sorteio(num);
        printf("%d   " , k);
        if(k == num)
            printf ("Voce ganhou !!!!!");
        else
            printf("Voce perdeu !!!!");
        flag++;
    }while(flag < 10);
}
