#include <stdio.h>
#include <locale.h>

#define PI 3.14 // Criando uma constante para PI

void areaMenu(void); // Principal
// Secundário
void areaQuadrado(void);
void areaCirculo(void);
void areaTrapezio(void);

void volumeMenu(void); // Principal
//secundário
void volumeCubo(void);
void volumeCilidro(void);

void fatorial(void);   // Principal




// PRINCIPAL
int main()
{
    int opcao_usuario;
    do
    {
        printf("\nMenu Principal:\n\n[1] Area\n[2] Volume\n[3] Fatorial\n[0] Sair\n");
        scanf("%d", &opcao_usuario);

        if (opcao_usuario != 0)
        {
            switch (opcao_usuario)
            {
            case 1:
                areaMenu();
                break;
            case 2:
                volumeMenu();
                break;
            case 3:
                fatorial();
                break;
            default:
                printf("Valor Invalido");
                break;
            }
        }
        else
        {
            printf("\nVoce saiu do programa.");
        }

    } while (opcao_usuario != 0);
}

// MENU
void areaMenu(void)
{
    int opcao_usuario_area;
    printf("\nMenu da Area:\n\n[1] Quadrado\n[2] Circulo\n[3] Trapezio\n[0] Sair\n");
    scanf("%d", &opcao_usuario_area);
    if (opcao_usuario_area != 0)
    {
        switch (opcao_usuario_area)
        {
        case 1:
            areaQuadrado();
            break;
        case 2:
            areaCirculo();
            break;
        case 3:
            areaTrapezio();
            break;
        default:
            printf("Opcao Invalida.");
            break;
        }
    }
    else
    {
        printf("Menu encerrado.\n\nVoltando ao menu principal.");
    }
}

void volumeMenu(void)
{
    int opcao_usuario_volume;
    printf("\nMenu do Volume:\n\n[1] Cubo\n[2] Cilindro\n[0] Sair\n");
    scanf("%d", &opcao_usuario_volume);
    if (opcao_usuario_volume != 0)
    {
        switch (opcao_usuario_volume)
        {
        case 1:
            volumeCubo();
            break;
        case 2:
            volumeCilindro();
            break;
        default:
            printf("Opcao Invalida.");
            break;
        }
    }
    else
    {
        printf("Menu encerrado.\n\nVoltando ao menu principal.");
    }
}

void fatorial(void)
{
    int contador, r, fatorial = 1;

    printf("\nDigite um numero para calcular o fatorial:\n");
    scanf("%d", &r);

    if (r >= 0)
    {
        for (contador = 1; contador <= r; contador++)
        {
            fatorial *= contador;
        }
        printf("O fatorial de %d e %d.\n", r, fatorial);
    }
    else
    {
        printf("Opcao Invalida.");
    }
}

// MENU AREA
void areaQuadrado(void)
{

    float l1, l2;
    printf("Digite um lado:");
    scanf("%f", &l1);
    printf("Digite outro lado:");
    scanf("%f", &l2);

    if (l1 != l2)
    {
        printf("Os lados precisam ser iguais!\n");
    }
    else
    {

        printf("A area do quadrado e %.2f\n", l1 * l2);
    }
}

void areaCirculo(void)
{
    float r;

    printf("Digite o raio do circulo:\n");
    scanf("%f", &r);

    printf("A area do circulo e %.2fcm .\n", PI * (r * r));
}

void areaTrapezio(void)
{
    float b1,b2, h;

    printf("Digite a base maior:");
    scanf("%f", &b1);
    printf("Digite a base menor:");
    scanf("%f", &b2);
    printf("Digite a altura:");
    scanf("%f", &h);

    
    printf("A area do trapezio e de %.2f.\n", ((b1+b2)*h)/2);


}

//MENU VOLUME
void volumeCubo(void)
{
    float lado;

    printf("\nDigite o lado do cubo:\n");
    scanf("%f",&lado);

    if(lado == lado){
        printf("O volume do cubo e %.2fcm.\n", lado*lado*lado);
    } else {
        printf("Os lados devem ser iguais.");
    }
}

void volumeCilindro(void)
{
    float altura, d, r;

    printf("\nDigite a altura do cilindro:");
    scanf("%f",&altura);

    printf("\nDigite o diametro do cilidro:");
    scanf("%f", &d);

    d = d/2;
    r = PI*(d*d)*altura;

    printf("\nO volume do cilindro e %.2fcm.", r);
}