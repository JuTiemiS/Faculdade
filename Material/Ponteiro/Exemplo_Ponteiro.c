#include <stdio.h>

void preencher(int *num1, int *num2);

int main(){ 
    int num1, num2;

    preencher(&num1, &num2);
    printf("Num1: %d\n", num1);
    printf("Num2: %d\n", num2);
}

void preencher(int *num1, int *num2){
    *num1 = 68;
    *num2 = 23;

    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;

}













