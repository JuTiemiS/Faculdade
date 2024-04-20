#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Soma dos valores da diagonal principal
// Soma das linhas e somas da coluna
// O maior numero da matriz

int main()
{
    int matriz[4][4], diagonal = 0, maior = 0, somalinha = 0, somacoluna = 0, i, j;

    for (i = 0; i < 4; i++)
    {
        somalinha = 0;

        for (j = 0; j < 4; j++)
        {
            matriz[i][j] = rand() % 11;
            somalinha += matriz[i][j];
            printf("%2d  ", matriz[i][j]);
        }

        diagonal += matriz[i][i];
        printf("| %3d\n", somalinha);
    }
    maior = matriz[0][0];
    printf("-----------------\n");
    for (j = 0; j < 4; j++)
    {
        somacoluna = 0;
        for (i = 0; i < 4; i++)
        {
            somacoluna += matriz[j][i];
            maior = matriz[j][i] > maior ? matriz[j][i] : maior;
        }
        printf("%3d ", somacoluna);
    }
    printf("\n\nMaior: %d\n", maior);
    printf("Diagonal principal: %d\n", diagonal);
    printf("\n\n");
}
