// 3. Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias: 
 
// infantil A =  5 -  7 anos
// infantil B =  8 - 10 anos
// juvenil  A = 11 - 13 anos
// juvenil  B = 14 - 17 anos
// adulto = maiores de 18 anos

void main(){

    int idade;

    printf("Digite a idade do nadador:"); 

    if(idade >= 5 && idade <= 7){ 
        printf("Infantil A."); 
    } else if (idade >= 8 && idade <= 10){
        printf("Infantil B."); 
    } else if (idade >= 11 && idade <= 13){
        printf("Juvenil A."); 
    } else if (idade >= 14 && idade <= 17){
        printf("Juvenil B."); 
    } else if (idade >= 18){ 
        printf("Adulto."); 
    } else { 
        printf("Nao possui idade suficiente.");
    
    }
}