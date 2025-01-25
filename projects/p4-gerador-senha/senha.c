#include <stdio.h>
#include <string.h>
#include <time.h>

void gera_senha(){
    int tam = 0, i = 0, j = 0;
        srand(time(NULL));
        char letras_maiusculas[] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
        char letras_minusculas[] = "abcdefghijklmnopqrstuvxwyz";
        char caracteres_especiais[] = "!@#$&";
        char numeros[] = "1234567890";

        printf("Tamanho da senha: ");
        scanf("%d", &tam);

        char senha[tam];

        char todos_caracteres[70];
        strcpy(todos_caracteres, letras_maiusculas);
        strcat(todos_caracteres, letras_minusculas);
        strcat(todos_caracteres, caracteres_especiais);
        strcat(todos_caracteres, numeros);

        
        printf("\n\tSenha gerada: ");

        for (i = 0; i < tam ; i++) {
            j = rand() % 70;
            senha[i] = todos_caracteres[j];
            printf("%c", senha[i]);
        }
        printf("\n\n");
}

int main(){
    int opcao;
    
        do
        {
            printf("1. Gerar nova senha\n0. Sair\nEscolha: ");
            scanf("%d", &opcao);
            getchar();
            switch (opcao)
            {
            case 1:
                gera_senha();
                break;
            
            default:
                if(opcao != 0)
                    printf("Opção inválida!\n");
                break;
            }
        } while (opcao != 0);
        

   return 0;
}