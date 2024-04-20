#include <stdio.h>

//protótipo  
int fibonacci(int n);

int main()
{
    int n, i;

    printf("Digite o numero de termos que voce deseja:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++){
    printf(" %d ", fibonacci(i));
    }
}

int fibonacci(int n)
{
    if (n == 1 || n ==2)
    return 1;
    else 
    return fibonacci(n-1)+fibonacci(n-2);


}
