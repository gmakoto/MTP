#include <stdio.h>
#include <stdlib.h>

int som(int *vet, int i, int n)
{
    if(i < n)
        return vet[i] + som(vet , i + 1, n);
    return 0;
}

int main()
{
    int i = 0;
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);
    printf("Soma: %d " , som(A, i, N));
    return 0;
}
