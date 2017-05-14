#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NCHAR 256

int main()
{
    char frase[NCHAR], letras[NCHAR];
    int i , k = 1, l;
    printf("Digite uma frase:");
    fgets(frase, NCHAR, stdin);
    if(frase[0] != ' ')
    {
        letras[0] = frase[0];
    }
    else
        letras[0] = frase[1];
    for(i = 1; frase[i] != '\0'; i++)
    {
        if(frase[i] == ' ')
        {
            letras[k] = frase[i + 1];
            k++;
        }
    }
    for(l = 0; letras[l] != '\0'; l++)
        letras[l] = toupper(letras[l]);
    printf("A frase formada pela primeira letra de cada palavra fica: %s\n ", letras);
    return 0;

}
