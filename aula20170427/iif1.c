#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	float porcento, aleatorio;
	int cont = 0, i;
	printf("Digite um numero entre 0 e 1 para representar uma porcentagem\n");
	scanf("%f", &porcento);
	srand(time(0));
	for(i = 0; i < 100; i++)
	{
		aleatorio = (float)(rand() % 100) / (float)100;
	    if(porcento > aleatorio)
	    cont++;
	}	
	printf("O numero de vezes que o numero aleatorio e menor que o digitado e: %d ", cont );
	return 0;
}
