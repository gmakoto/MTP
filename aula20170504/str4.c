#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    int l, i;
    printf("Digite uma frase:");
    fgets(frase, 100, stdin);
    for(l = 0; frase[l] != '\0'; l++)
        frase[l] = toupper(frase[l]);
    for (i = 0; frase[i] != '\0'; i++)
    {
        if(frase[i] == 'A')
            frase[i] = '4';
        if(frase[i] == 'E')
            frase[i] = '3';
        if(frase[i] == 'I')
            frase[i] = '1';
        if(frase[i] == 'O')
            frase[i] = '0';
        if(frase[i] == 'S')
            frase[i] = '5';
        if(frase[i] == 'G')
            frase[i] = '6';
    }
    printf("A mensagem fica: %s", frase);
}
