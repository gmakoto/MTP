#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[17] = {0};
    int * p ;
    int i , j;
    printf("Digite uma frase:");
    fgets(frase, 17, stdin);
    p = (int *)frase;
    printf("Conteudo em decimal: ");
    for(i = 0; i < sizeof(p); i++)
    {
        printf("%i ", p[i]);
    }
    printf("\n\nConteudo em hexadecimal: ");
    for(j = 0; j < sizeof(p); j++)
    {
        printf("%X ", p[j]);
    }
    printf("\n\n");
    return 0;

}
