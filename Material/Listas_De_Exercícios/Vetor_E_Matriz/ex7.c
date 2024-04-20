// 7. Preencha um vetor de 10 posições, ordene os valores em crescente e mostre ordenado na tela.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], i, j;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero para o vetor[%d]:\n", i);
        scanf("%d", &vetor[i]); // inserindo numeros no vetor
    }

    for (j = 10 - 1; j > 0; j--) // metodo bubble
    {
        for (i = 0; i < j; i++)
        {
            if (vetor[i] > vetor[i + 1]) // se o numero no vetor i for maior que o numero no vetor i + 1 // comparando os elementos
            {
                int t;
                t = vetor[i];  // variavel t igual ao vetor i
                vetor[i] = vetor[i + 1]; // vetor i vai ser igual ao vetor i + 1
                vetor[i + 1] = t; // vetor i + 1 vai ser igual a t
            }                     
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", vetor[i]); // imprimindo o vetor ordenado
    }
}
