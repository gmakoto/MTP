#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

int main()
{
	double complex A, B, Z;
	double rA, rB, iA, iB;
	printf("Digite a parte real de A:\n");
	scanf("%lf", &rA);
	printf("Digite a parte imaginaria de A:\n");
	scanf("%lf", &iA);
	printf("Digite a parte real de B:\n");
	scanf("%lf", &rB);
	printf("Digite a parte imaginaria de B:\n");
	scanf("%lf", &iB);
	A = rA + I*iA;
	B = rB + I*iB;
	Z = A + B;
	printf("A soma e : %lf + I*%lf\n", creal(Z), cimag(Z));
	printf("ou igual a %lf <%lf rad\n", cabs(Z), carg(Z));
	return 0;
}
