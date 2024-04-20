// 4. O cardapio de uma lanchonete e o seguinte:

// Especificacao	   Codigo	Preco
// Cachorro quente	    100	    1,20
// Bauru simples	    101	    1,30
// Bauru com ovo	    102	    1,50
// Hamburger	        103	    1,20
// Cheeseburguer	    104	    1,30
// Refrigerante	        105	    1,00

int main()
{

    float valor_p, quant_p, r;
    int id_p;

    printf("Digite o codigo do produto que deseja:"); 
    scanf("%d", &id_p);

    printf("Digite a quantidade do produto que deseja:"); 
    scanf("%f", &quant_p);

    if (id_p == 100)          
    {                          
        valor_p = 1.20;        
        r = valor_p * quant_p; 
        printf("\nSeu pedido ficou %.2f.", r);
    }
    else if (id_p == 101)
    {
        valor_p = 1, 30;
        r = valor_p * quant_p;
        printf("\nSeu pedido ficou %.2f.", r);
    }
    else if (id_p == 102)
    {
        valor_p = 1, 50;
        r = valor_p * quant_p;
        printf("\nSeu pedido ficou %.2f.", r);
    }
    else if (id_p == 103)
    {
        valor_p = 1, 20;
        r = valor_p * quant_p;
        printf("\nSeu pedido ficou %.2f.", r);
    }
    else if (id_p == 104)
    {
        valor_p = 1, 30;
        r = valor_p * quant_p;
        printf("\nSeu pedido ficou %.2f.", r);
    }
    else if (id_p == 105)
    {
        valor_p = 1, 00;
        r = valor_p * quant_p;
        printf("\nSeu pedido ficou %.2f.", r);
    }
    else                            
    {                               
        printf("Opcaoo Invalida."); 
    }
}
