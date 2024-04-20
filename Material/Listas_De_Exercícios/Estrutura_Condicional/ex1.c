// 1. Elaborar um algoritmo que le 3 valores a,b,c e os escreve. A seguir, encontre o maior dos 3 valores e o escreva com a mensagem : "E o maior ".

int main()
{

    int a, b, c;

    printf("Digite o primeiro numero: "); 
    scanf("%d",&a);

    printf("Digite o segundo numero: "); 
    scanf("%d",&b);

    printf("Digite o terceiro numero: "); 
    scanf("%d",&c);

    printf("\nOs numeros sao: %d, %d e %d\n", a, b, c);

    if(a > b && a > c){ 
        printf("\n%d e o maior.", a); 
    } else if(b > a && b > c){ 
        printf("\n%d e o maior.", b); 
    } else { 
        printf("\n%d e o maior.", c); 
    }
}
