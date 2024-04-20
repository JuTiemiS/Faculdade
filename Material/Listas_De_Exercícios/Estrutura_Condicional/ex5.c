// 5. Tendo como dados de entrada a altura e o sexo de uma pessoa (?M? masculino e ?F? feminino), construa um algoritmo que calcule seu peso ideal, utilizando as seguintes formulas:

// para homens: (72.7*h)-58
// para mulheres: (62.1*h)-44.7

void main(){

    float altura, r;
    char sexo;

    printf("Digite sua altura:"); 
    scanf("%f", &altura);

    printf("Digite seu sexo:");
    scanf("%s", &sexo);


    switch (sexo)
    {
    case 'F':
        r = (62.1*altura)-44.7;
        printf("Seu peso ideal e %.2f.", r);
        break;

    case 'f':
        r = (62.1*altura)-44.7;
        printf("Seu peso ideal e %.2f.", r);
        break;

    case 'm':
        r = (72.7*altura)-58;
        printf("Seu peso ideal e %.2f.", r);
        break;

    case 'M':
        r = (72.7*altura)-58;
        printf("Seu peso ideal e %.2f.", r);
        break;

    default:
    break;
    }
}