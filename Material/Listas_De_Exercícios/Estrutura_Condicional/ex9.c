// 9. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.

void main () {

    int dia, mes, ano, r, idade;

    printf("Quantos anos você tem?");
    scanf("%d", &idade);

    printf("Qual dia voce nasceu?");
    scanf("%d", &dia);
    printf("Qual mes voce nasceu?");
    scanf("%d", &mes);
    printf("Qual ano voce nasceu?");
    scanf("%d", &ano);

    r = (idade * 365) + (mes * 30) + dia;

    printf("Sua idade em dias sao %d dias.", r);
    
}