#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int numero, aleatorio;
	printf("Digite um numero nao negativo qualquer:\n\n");
	scanf ("%d" , &numero);
	if(numero >= 0)
	{
		srand(time(0));
		aleatorio = rand() % 9;
		printf("O numero aleatorio e: %d\n", aleatorio);
		if((aleatorio + numero) % 2 == 0)
			printf("A soma entre o numero digitado e um numero aleatorio e par\n");
		else
			printf("A soma entre o numero digitado e um numero aleatorio e impar\n");
		if(aleatorio % 2 == 0)
			printf("O numero aleatorio e par\n");
		else
			printf("O numero aleatorio e impar\n");
		if(numero % 2 == 0)
			printf("O numero digitado e par\n");
		else
			printf("O numero digitado e impar\n");

	}
	return 0;
}
