// 10. Desenvolva um programa em C que verifique se uma matriz 3x3 de inteiros é uma matriz identidade.

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int matriz[3][3], i, j;
    bool diagonal = true;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("matriz[%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]); // inserindo os dados na matriz
        }
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]); // imprimindo a matriz
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (1 != matriz[i][i]) // se r = 1 for diferente que a diagonal da matriz
            {
                diagonal = false; // coloca a diagonal como false
                break; // para o codigo
            }
        }
    }

    if (diagonal) // se for verdadeiro
    {
        printf("E uma matriz identidade."); // matriz identidade
    }
    else //se nao
    {
        printf("Nao e uma matriz identidade."); // nao e uma matriz identidade
    }
}
