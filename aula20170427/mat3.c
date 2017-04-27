#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float numero, base;
	float log;
	printf("Digite um numero:");
	scanf("%f", &numero);
	printf("Digite um valor para a base:");
	scanf("%f", &base);
	log = (log10(numero)) / (log10(base));
	printf("O valor do logaritmo e: %.4f", log);
	return 0;
}
