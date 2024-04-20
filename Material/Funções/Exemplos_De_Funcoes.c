#include <stdio.h>
// protótipo
void imprimirNome(void);
void imprimirNumeroReal(float num);
int retornarAno(void);
int soma(int n1, int n2);

int main() { // chamada de função
    imprimirNome(); 
    imprimirNumeroReal(14.5);
    printf("Ano: %d\n",retornarAno());
    printf("Soma: %d\n",soma(2,3));
    
}

void imprimirNome() { // construção da função
    printf("Julia\n");
}

void imprimirNumeroReal(float num) {
    printf("O numero passado foi: %f\n",num);
}

int retornarAno(void){
    return 2024;
}

int soma(int n1, int n2){
    return n1+n2;
}

