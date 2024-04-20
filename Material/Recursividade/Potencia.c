#include <stdio.h>
#include <math.h>


int potencia(int d);

void main (){

     int d;

    printf("numero que voce deseja na potencia 2:");
    scanf("%d",&d);

    printf("Resultado: \n%d", potencia(d));

}

int potencia(int d){ 
    
    if (d == 0)
        return 1;
    else if (d > 0)
        return 2 * potencia(d-1);
    
}