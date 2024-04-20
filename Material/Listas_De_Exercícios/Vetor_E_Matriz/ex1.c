// 1. Faça um programa em C que conte quantos elementos pares existem em um vetor de inteiros.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], i, j = 0;

    for (i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 101; //atribuindo valores aleatórios
        printf(" %d |", vetor[i]); // digitalizando o vetor
    }

    printf("\n");

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0) // se o o valor do vetor na posição i divido por 2 for igual a 0 (se o numero for par)
        {
            j++; // soma a quantidade de valores pares com o ++
            printf("\nO numero %d e par.", vetor[i]); // imprime os numeros pares
        }
    }

    printf("\n\n%d numeros pares.", j); // fala a quantidade de numeros pares que o vetor possui
}
