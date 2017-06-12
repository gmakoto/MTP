#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char c;
    int tam = 0;
    char *texto = NULL;
    printf("Escreva '\' + ENTER para encerrar:\n");
    do
    {
        c = getchar();
        tam++;
        texto = (char*) realloc(texto, tam*sizeof(char));
        texto[tam - 1] = toupper(c);
    }while(c != '\\');
    texto[tam - 1] = '\0';
    printf("\n\n****************************\n\n");
    printf("%s", texto);
    return 0;
}
