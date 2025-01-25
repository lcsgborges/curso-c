// Leitura e escrita em arquivos com funções e procedimentos:

#include <stdio.h>

void criar_arquivo(FILE *file, char *nome){
    char letra;
    file = fopen(nome, "w");
    if(file){
            printf("Digite algo e aperte ENTER para criar o arquivo: ");
            scanf(" %c", &letra);
            while (letra != '\n'){
                fputc(letra, file);
                scanf("%c", &letra);
            }
            fclose(file);
    }
    else
        printf("erro ao criar arquivo\n");
}

void ler_arquivo(FILE *file, char *nome){
    // continuar depois
}

int main(){
    FILE *file = NULL;
    char nome_arquivo[30];
    int opcao;

    do
    {
        printf("\n1. Escrever um arquivo txt\n2. Ler um arquivo txt\n0. Sair\nOpção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
                printf("nome do arquivo terminando em txt (exemplo: texto.txt): ");
                scanf(" %50[^\n]", nome_arquivo);
                criar_arquivo(file, nome_arquivo);
            break;
        case 2:

            break;
        default:
            if (opcao != 0)
                printf("Opção inválida!\n");
            break;
        }
    } while (opcao != 0);
    
    return 0;
}