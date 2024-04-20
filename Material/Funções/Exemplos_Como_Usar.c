#include <stdio.h>

int soma(int x, int y);
int raizQuadrada(int x);
int dobroValor();
int pi();

void main(){

    int opcao;

    printf("Escolha uma das opcoes abaixo: \n\n1 = Soma\n2 = Raiz Quadrada\n3 = Dobro do Valor\n4 = PI\n0 = Sair ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
    printf("Soma: %d",soma(3,5));  
    break;

    case 2:
    printf("Raiz Quadrada: %d",raizQuadrada(2))
    break;

    case 3:
    dobroValor();
    break;

    case 4:
    pi();    
    break;

    default:
    printf("O programa acabou.");
    break;
    }
}

int soma(int x, int y){

    return x+y;
}

int raizQuadrada(int x){
    return x/2;

}