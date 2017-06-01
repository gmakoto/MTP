#include <stdio.h>
#include <stdlib.h>

void comparar(int *vet1[], int *vet2[], int n, int m)
{
    int i , j ;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
        {
            if(vet1[i] == vet2[j])
            {
                printf("%d , ", vet2[j]);
            }

        }
}

int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int n = sizeof(A)/sizeof(int);
    int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int m = sizeof(B)/sizeof(int);
    printf("Os numeros iguais dos dois vetores sao: ");
    comparar(&A, &B, n, m);
    return 0;
}
