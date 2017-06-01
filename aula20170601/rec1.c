#include <stdio.h>
#include <stdlib.h>
#define N 256

void inverter(char *frase)
{
    if(*frase != '\0')
        inverter(frase + 1);
    printf("%c", *frase);
}

int main()
{
    char frase[N];
    printf("Entre com uma frase: ");
    fgets(frase, N, stdin);
    inverter (frase);
    return 0;
}
