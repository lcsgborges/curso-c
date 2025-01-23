#include <stdio.h>

/*
    Estrutura de seleção SWITCH CASE:

    1 - Cadastrar produto
    2 - Editar produto
    3 - Remover produto
    4 - Imprimir lista de produtos 
    5 - Sair

    *é possível utilizar com caracteres também, mas tomando cuidado com minusculas e maiusculas
*/

int main(){

    int opcao;

    printf("1 - Cadastrar produto\n2 - Editar produto\n3 - Remover produto\n4 - Imprimir lista de produtos\n5 - Sair\n\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nCadastrando produto...\n");
        break;
    case 2:
        printf("\nEditando produto...\n");
        break;  
    case 3:
        printf("\nRemovendo produto...\n");
        break;
    case 4:
        printf("\nImprimindo lista de produtos...\n");
        break;
    case 5:
        printf("\nSaindo...\n");
        break;
    default:
        printf("\nOpção inválida!\n");
        break;
    }

    return 0;
}