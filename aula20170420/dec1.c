#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}

int main()
{
    int numero;
    printf("Digite um numero:");
    scanf("%d" , &numero);
    //safeFlush();
    if(numero%2 == 0)
        printf("O numero e par!!");
        else
            printf("O numero e impar!!");
    if(numero%3 == 0)
        printf("O numero e multiplo de 3!!");
    if(numero%5 == 0)
        printf("O numero e multiplo de 5!!");
    if(numero%7 == 0)
        printf("O numero e multiplo0 de 7!!");
    return 0;
}


