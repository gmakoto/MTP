#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float ladoB, angulo, ladoC;
	float ladoA;
	printf("Digite um dos lados do triangulo:\n");
	scanf("%f" , &ladoB);
	printf("Digite um dos lados do triangulo:\n");
	scanf("%f" , &ladoC);
	printf("Digite o angulo em radianos: \n");
	scanf("%f", &angulo);
	ladoA = sqrt((pow (ladoB , 2)) + (pow (ladoC , 2)) - (2*ladoB*ladoC*cos(angulo)));
	printf("O terceiro lado e: %.4f\n", ladoA);
	return 0;
	
}
