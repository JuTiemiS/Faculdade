// 8. Escreva um programa em C que calcule e imprima a soma de todos os elementos de uma matriz 3x3 de inteiros.

#include <stdio.h>

int main()
{
    int matriz[3][3], i, j, soma;

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 9;
            printf("%d ", matriz[i][j]);    // imprime a matriz inteira
        }
    }
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            soma += matriz[i][j]; // somando todos os elementos na matriz
        }
    }

    printf("A soma de todos os elementos na matriz e %d", soma); // resultado
}
