#include <stdio.h>
#include <string.h>
#define N 5

struct aluno // criando uma struct
{
    int codigo;
    char nome[30];
    float media;
};
typedef struct aluno aluno; // comando que renomeia a struct

int main()
{
    struct aluno vetor[N]; // selecionando a struct aluno dentro do vetor
    int i;

    for (i = 0; i < N; i++)
    {
        printf("Digite o codigo do aluno: ");
        scanf("%d", &vetor[i].codigo); // inserindo o codigo no vetor[i]

        printf("Digite o nome do aluno: ");
        scanf("%s", &vetor[i].nome); // inserindo o nome no vetor[i]

        printf("Digite a media do aluno: ");
        scanf("%f", &vetor[i].media); // inserindo o media no vetor[i]

        printf("\nCodigo : %d \nNome: %s \nMedia: %.2f\n\n", vetor[i].codigo, vetor[i].nome, vetor[i].media); // imprimindo os dados
    }
}
