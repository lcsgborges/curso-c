#include <stdio.h>
#include <string.h>

int main(){
    char escolha;

    printf("Deseja jogar Forca? [s]im [n]ão");
    scanf("%c", &escolha);

    if (escolha =='s'){
        iniciarjogo();
    }
    else if(escolha =='n'){
        printf("Saindo...\n");
        exit();
    }
    else{
        printf("Escolhe inválida.\n");
    }
    return 0;
}