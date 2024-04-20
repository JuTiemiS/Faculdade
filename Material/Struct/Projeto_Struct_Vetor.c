// Menu Agenda
// [1] Cadastrar
// [2] Mostrar
// [3] Editar
// [4] Excluir
// [5] Ordenar por nome
// [6] Salvar em arquivo
// [7] Sair

#include <stdio.h>
#include <string.h>

void cadastrarPessoa (void);
void mostrarPessoa (void);
void editarPessoa (void);
void excluirPessoa (void);
void ordenarPessoa (void);
void salvarPessoa (void);

struct pessoa
{
    int codigo;
    char nome[35];
    float telefone;
};
typedef struct pessoa pessoa;

//MENU PRINCIPAL
int main()
{
    int opcao_usuario;
    do
    {

        printf("~MENU AGENDA~\n\n[1] Cadastrar\n[2] Mostrar\n[3] Editar\n[4] Excluir\n[5] Ordenar por nome\n[6] Salvar em arquivo\n[7] Sair\n\nEscolha uma opcao: ");
        scanf("%d", &opcao_usuario);
        if (opcao_usuario != 7)
        {
            switch (opcao_usuario)
            {
                case 1:
                cadastrarPessoa ();
                break;
                case 2:
                //mostrarPessoa ();
                break;
                case 3:
                //editarPessoa ();
                break;
                case 4:
                //excluirPessoa ();
                break;
                case 5:
                //ordenarPessoa ();
                break;
                case 6:
                //salvarPessoa ();
                break;
                default:
                printf("Opcao Invalida!!\n\n");
                break;
            }
        }
        else
        {
            printf("O Programa terminou!\n\n");
        }
    } while (opcao_usuario != 7);
}

void cadastrarPessoa(void){

    int numero_cadastro,n = 1, i;
    struct pessoa vetor[n];

    printf("\nDeseja cadastrar quantas pessoas? ");
                scanf("%d", &numero_cadastro);
                if (numero_cadastro > 0)
                {
                    for (i = 0; i < numero_cadastro; i++)
                    {

                        printf("Digite o codigo da pessoa: ");
                        scanf("%d", &vetor[i].codigo);

                        printf("Digite o nome da pessoa: ");
                        scanf("%s", &vetor[i].nome);

                        printf("Digite o telefone da pessoa: ");
                        scanf("%f", &vetor[i].telefone);
                        printf("\n");
                    }
                }
                else
                {
                    printf("Opcao invalida!!");
                }
}