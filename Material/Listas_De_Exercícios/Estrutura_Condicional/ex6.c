// 6. Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente. O algoritmo deve receber o código de um produto e a quantidade comprada 
// e calcular o preço total, usando a tabela abaixo:

// Código do Produto	Preço unitário
// 1001			            5,32
// 1324		            	6,45
// 6548			            2,37
// 0987			            5,32
// 7623			            6,45


int main()
{
    float total;
    int quant, cod;
    
    

    printf("Digite o codigo do produto:");
    scanf("%d", &cod);

    printf("Digite a quantidade do produto:");
    scanf("%d", &quant);

    if(cod == 1001){
        total = quant * 5.32;
        printf("O preco total do pedido e %.2f.", total);
    } else if(cod == 1324){
        total = quant * 6.45;
        printf("O preco total do pedido e %.2f.", total);
    } else if(cod == 6548){
        total = quant * 2.37;
        printf("O preco total do pedido e %.2f.", total);
    } else if(cod == 987){
        total = quant * 5.32;
        printf("O preco total do pedido e %.2f.", total);
    } else if(cod == 7623){
        total = quant * 6.45;
        printf("O preco total do pedido e %.2f.", total);
    } else {
        printf("Essa opcao nao existe.");
    }
}
