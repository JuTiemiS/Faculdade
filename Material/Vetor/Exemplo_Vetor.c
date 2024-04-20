#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    int vet[N], i;
    srand(time(NULL));
    for(i = 0; i < N; i++)
    {
        vet[i] = rand()%51;
        printf("vet[%d] = %d\n", vet+i, (vet+i));
    }
}
