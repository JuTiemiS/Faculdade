// 2. Elaborar um algoritmo que le 2 valores a e b e os escreve com a mensagem: "Sao multiplos" ou "Nao sao multiplos".

int main()
{

    int a, b;

    printf("Digite um numero:");
    scanf("%d", &a);

    printf("Digite um numero:");
    scanf("%d", &b);

    if(a % b == 0 || b % a == 0){ 
            printf("Sao multiplos.");
        } else { // Se nao
            printf("Nao sao multiplos."); 
        } 

   

}
