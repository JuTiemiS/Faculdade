// 9. Faça um programa em C que encontre e imprima o maior elemento de uma matriz 3x3 de inteiros.

#include <stdio.h>

int main()
{
    int matriz[3][3], i, j, maior;

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 501;
            printf("%d ", matriz[i][j]); // imprimindo a matriz
        }
    }
    printf("\n");
    maior = matriz[0][0]; // maior vai ser igual a matriz zerada
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        { // condição ? valor se verdadeiro : valor se falso
            maior = matriz[j][i] > maior ? matriz[j][i] : maior;
        }
    }
    printf("O maior numero da matriz e %d", maior); // resultado
}
