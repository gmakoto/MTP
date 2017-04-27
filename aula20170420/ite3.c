#include <stdio.h>

int main()
{
    char palavra[256];
    int nletras = 0, i;
    printf("Digite uma palavra:");
    scanf ("%s", palavra);
    for(i = 0; palavra[i] != '\0'; i++)
    {
        nletras = nletras + 1;
    }
    printf("O numero de letras da palavra digitada e: %d", nletras);
    return 0;
}
