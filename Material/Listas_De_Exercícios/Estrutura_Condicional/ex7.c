// 7. Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. A seguir: 

// a) Se i=1 escrever os três valores a, b, c em ordem crescente. 
// b) Se i=2 escrever os três valores a, b, c em ordem decrescente. 
// c) Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois.

void main (){

    int i;
    float a,b,c;

    printf("Digite o primeiro numero:");
    scanf("%f", &a);

    printf("Digite o segundo numero:");
    scanf("%f", &b);

    printf("Digite o terceiro numero:");
    scanf("%f", &c);

    printf("escolha uma ordem para separar os numeros: \n\n 1 - Ordem crescente \n 2 - Ordem decrescente \n 3 - O maior numero ira ficar entre os outros dois\n");
    scanf("%d", &i);

    if(i == 1){
        if(a<b && b<c){
            printf("%.2f %.2f %.2f", a, b, c );
        } else if(a<c && c<b){
            printf("%.2f %.2f %.2f", a, c, b );
        } else if(c<a && a<b){
            printf("%.2f %.2f %.2f", c, a, b );
        } else if(b<a && a<c){
            printf("%.2f %.2f %.2f", b, a, c );
        } else if(c<b && b<a){
            printf("%.2f %.2f %.2f", c, b, a );
        } else {
            printf("%.2f %.2f %.2f", b, c, a );
        }
        
    } else if (i == 2){
        if(a>b && b>c){
            printf("%.2f %.2f %.2f", a, b, c );
        } else if(a>c && c>b){
            printf("%.2f %.2f %.2f", a, c, b );
        } else if(c>a && a>b){
            printf("%.2f %.2f %.2f", c, a, b );
        } else if(b>a && a>c){
            printf("%.2f %.2f %.2f", b, a, c );
        } else if(c>b && b>a){
            printf("%.2f %.2f %.2f", c, b, a );
        } else {
            printf("%.2f %.2f %.2f", b, c, a );
        }
    } else if (i == 3){
        if(a>b && b>c){
            printf("%.2f %.2f %.2f", a, b, c );
        } else if(a<c && c>b){
            printf("%.2f %.2f %.2f", a, c, b );
        } else if(c<a && a>b){
            printf("%.2f %.2f %.2f", c, a, b );
        } else if(b<a && a>c){
            printf("%.2f %.2f %.2f", b, a, c );
        } else if(c<b && b>a){
            printf("%.2f %.2f %.2f", c, b, a );
        } else {
            printf("%.2f %.2f %.2f", b, c, a );
        }
    }
    }
