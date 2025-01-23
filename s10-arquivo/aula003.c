// Lendo e escrevendo em um novo arquivo usando w+:

#include <stdio.h>

int main(){
    FILE *f;
    char letra;
    f = fopen("/home/lucas/Documents/cursoC/texto_teste2.txt", "w+");
    if (f){
        printf("Digite alguma frase e aperte ENTER para finalizar: ");
        scanf("%c", &letra);
        while(letra != '\n'){
            fputc(letra,f);
            scanf("%c", &letra);
        }
        // quando terminar de escrever e apertar ENTER, o ponteiro vai estar apontando para o final do arquivo:
        // logo precisamos usar uma função para jogar o ponteiro para o inicio:

        rewind(f); // voltando ponteiro para o inicio do texto

        printf("\nTexto lido do arquivo: ");
        while(!feof(f)){        // vai andando com o ponteiro pelo arquivo até chegar no fim e retornar 1;
            letra = fgetc(f);
            printf("%c", letra);
        }
        printf("\n");
        fclose(f);
    }
    else{
        printf("Erro ao abrir arquivo\n");
    }

    return 0;
}