// 10. Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.

void main () {

    int dia, mes, ano, r, idade;

    printf("Quantos anos você tem em dias?");
    scanf("%d", &idade);


    ano = (idade/365);
    mes = (idade%365)/30;
    dia = (idade%365)%12;

    printf("Voce possui %d anos, %d meses e %d dias",ano, mes, dia);

    
}