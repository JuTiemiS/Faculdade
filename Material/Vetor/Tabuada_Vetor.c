// Tabuada com vetor

#include <stdio.h>
#include <stdlib.h>


int main(){

     int vet[11], i, n;
    printf("Digite um numero para calcular a tabuada:");
    scanf("%d", &n);
    for(i = 0; i < 11; i++)
    {
        vet[i] = i * n;
        printf("vet[%d] = %d\n", i, vet[i]);
    }

}