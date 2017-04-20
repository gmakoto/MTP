#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}

int main()
{
    float A, B, C, D, E, media;
    printf("Digite as notas A, B, C, D, E, respectivamente: ");
    scanf("%f %f %f %f %f", &A, &B, &C, &D, &E);
    if(A > 0 && A < 10.0 && B > 0 && B < 10.0 && C > 0 && C < 10.0 && D > 0 && D < 10.0 && E > 0 && E < 10.0)
    {
        media = ((A*2) + (B*2) + (C*2) + (D*3) + (E*5))/14;
        printf (" A media das notas e: %.3f", media);
    }
    return 0;
}
