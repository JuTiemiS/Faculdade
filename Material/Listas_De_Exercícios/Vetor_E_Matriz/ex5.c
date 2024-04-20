// 5. Desenvolva um programa em C que receba um vetor de inteiros e substitua todos os valores negativos por zero.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero para o vetor[%d]:\n", i);
        scanf("%d", &vetor[i]); // inserindo numeros no vetor
    }

    for (i = 0; i < 10; i++)
    {
        printf(" %d |", vetor[i]); // imprimindo o vetor
    }

    printf("\n\n");

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] < 0) // se o numero dentro do vetor for menor que 0
        {
            vetor[i] = 0; // o numero dentro do vetor vai ser igual a 0
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf(" %d |", vetor[i]); // imprimindo o vetor com os numeros substituidos
    }

    
}
