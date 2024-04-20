// 3. Crie um programa em C que verifique se um vetor de inteiros está ordenado de forma crescente.

#include <stdio.h>
#include <stdbool.h>
#define N 5 // definindo o tamanho do vetor

int main()
{
    int vetor[N], i;

    for (i = 0; i < N; i++)
    {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]); // inserindo os valores dentro do vetor
    }

    bool ordenado = true; // criando uma variavel booleana (verdadeiro e falso) como verdadeira (para identificar se o vetor esta ordenado)

    for (i = 0; i < N - 1; i++)
    {
        if (vetor[i] > vetor[i + 1]) // ex: se o vetor[0] = 5 for maior que o vetor[1] = 2
        {                            // está indicando que nao esta ordenado pois o vetor[0] > vetor[1], vai continuar no codido
            ordenado = false;        // inserindo o valor da variavel ordenado como falso
            break;                   // vai parar de executar esse processo
        }
    }

    if (ordenado) // se a variavel ordenado for true
    {
        printf("\nO vetor esta ordenado."); // o vetor esta ordenado
    }
    else // se a variavel for false
    {
        printf("\nO vetor nao esta ordenado."); // o vetor nao esta ordenado
    }
}
