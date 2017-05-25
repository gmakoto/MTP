#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lancar_dado()
{
    int i;
    i = (rand() % 6) + 1;
    return i;
}

int main()
{
    int j,k,l, teste2 = 0;
    int vetor[5];
    srand(time(0));
    printf("Digite ENTER para lançar o dado.");
    getchar();
    do
    {
        getchar();
        int soma = 0;
        for(j = 0; j < 5; j++)
            vetor[j] = lancar_dado();
        for(k = 0; k < 5; k++)
            soma = soma + vetor[k];
        if(soma >= 18 && soma <= 23 )
        {
            printf("Voce ganhou!!!!\n");
            for(l = 0; l < 5; l++)
                printf("%d, ", vetor[l]);
            printf("\n\nSoma = %d\n\n", soma);
            break;
        }
        else
        {
            printf("Voce perdeu!!!!\n");
            for(l = 0; l < 5; l++)
                printf("%d, ", vetor[l]);
            printf("\nSoma = %d\n\n", soma);
            teste2++;
        }

    }while(teste2 < 3);
}
