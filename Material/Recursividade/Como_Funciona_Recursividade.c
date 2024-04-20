#include <stdio.h>
//prototipo
long fatorial(short num);

void main (){

    short num = 4;
    printf("Fatorial de %hd e %ld",num,fatorial(num));

}

long fatorial(short num){ // Função Recursiva.
    if (num == 0)         // Enquanto a variavel num não for igual a 0, a funcão ira se repetir.
        return 1;
    else
        return num*fatorial(num-1);
    
}