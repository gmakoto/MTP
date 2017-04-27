#include <stdio.h>
#include <ctype.h>
#define NCHAR 256

int main()
{
	char frase[NCHAR];
	int i, nletras = 0;
	printf("Digite uma frase:");
	fgets(frase, NCHAR, stdin);
	for(i = 0; frase[i]; i++)
	{
		if (isalpha(frase[i]))
		{
			nletras++;
		}
	}
	printf("O numero de letras dessa frase e: %d", nletras);
	return 0;
}
