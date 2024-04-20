// 4. Faça um programa em C que verifique se um vetor de inteiros contém um determinado valor digitado pelo usuário.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], i, n;

    for (i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 201;
        printf(" %d |", vetor[i]); // imprimindo o vetor
    }

    printf("\nQual o valor voce acha que o vetor possui?\n");
    scanf("%d", &n);  // usuário especulando um valor do vetor


    if (vetor[i] == n) // se a quantidade de valor no vetor for igual ao n dito pelo usuario
        printf("Possui o valor digitado pelo usuario."); 
    else 
        printf("Nao possui o valor digitado pelo usuario.");
    
}
