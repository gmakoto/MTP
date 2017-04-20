#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}

int main()
{
    float lado , area;
    printf("Digite o lado do quadrado:");
    scanf ("%f", &lado);
    safeFlush();
    area = lado*lado;
    printf("A area do quadrado é: %f", area);
    return 0;
}
