#include <stdio.h>

void preencher(int *num1, int *num2); //prototipo

int main(){
    int num1, num2;
    preencher(&num1, &num2); //retornando os valores da funcao preencher
    printf("Num1: %d\n", num1);
    printf("Num2: %d\n", num2);
}

void preencher (int *num1, int *num2){ //Pegando as variaveis da funcao main para inserir os valores
    *num1 = 10;
    printf("Digite o valor do num2:");
    scanf("%d", *&num2);
}

// Todo ponteiro vai estar seguido com o *
// Quando a variavel vai receber o valor, vai estar seguido com &