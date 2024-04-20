// 6. Escreva um programa em C que determine se um vetor de inteiros é simétrico, ou seja, se ele é igual ao seu vetor invertido.

#include <stdio.h>
#include <stdbool.h>
#define N 5 // definindo uma variavel com o valor 5

int main()
{
    int vetor[N], invertido[N], i, j, r = 4;
    bool simetrico = true;

    for (i = 0; i < N; i++)
    {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]); // inserindo valores no vetor
    }
    for (j = 0; j < N; j++)
    {
        invertido[j] = vetor[r--]; // inserindo os valores invertidos no outro vetor
    }
    for (j = 0; j < N; j++)
    {
        printf("\nvetor[%d]: %d ", j, invertido[j]); // imprimindo o vetor invertido
    }

    for (j = 0; j < N; j++)
    {
        if (invertido[j] != vetor[r--]) // se o valor invertido[1] for diferente do vetor[5]
        {
            simetrico = false; // define a variavel simetrico como falso
            break;             // para de executar o codigo
        }
    }

    if (simetrico) // se a variavel simetrico for true
    {
        printf("\nO vetor e simetrico."); // simetrico
    }
    else // se for false
    {
        printf("\nO vetor nao e simetrico."); // nao simetrico
    }
}
