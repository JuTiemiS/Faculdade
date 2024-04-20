// 2. Desenvolva um programa em C que receba dois vetores de inteiros de mesmo tamanho e calcule o produto escalar entre eles.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, r = 0;

    printf("Digite o valor que deseja do vetor:\n"); // atribuindo a quantidade de posicoes dentro do vetor
    scanf("%d", &n);

    int vetor1[n], vetor2[n]; // atribuindo os vetores depois do scanf para que receba o valor de n

    for (i = 0; i < n; i++){
        printf("vetor1[%d] = ", i);
        scanf("%d", &vetor1[i]); //digitalizando vetor1
}
    for (i = 0; i < n; i++){
        printf("vetor2[%d] = ", i);
        scanf("%d", &vetor2[i]); //digitalizando vetor2
}
    for (i = 0; i < n; i++){
        r += vetor1[i] * vetor2[i]; //calculo do produto escalar / += é igual que r = r + v[1] * v[2];
    }
    printf("O produto escalar e %d\n", r); // resultado do produto escalar
}
