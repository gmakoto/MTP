#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroa, numerob, somaab;
    unsigned char *p;
    unsigned char *q;
    unsigned char *s;
    printf("Digite dois numeros reais:");
    scanf("%d %d", &numeroa, &numerob );
    somaab = numeroa + numerob;
    p = &numeroa;
    q = &numerob;
    s = &somaab;
    printf("\nInformacoes sobre o numero a\n.");
    printf("Endereco : %p | Contem: %i\n" , &numeroa, *p);
    printf("\nInformacoes sobre o numero b.\n");
    printf("Endereco : %p | Contem: %i\n" , &numerob, *q);
    printf("\nInformacoes sobre a soma de a e b.\n");
    printf("Endereco : %p | Contem: %i\n" , &somaab, *s);
    return 0;
}
