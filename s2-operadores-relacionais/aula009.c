#include <stdio.h>

// Operador lógico ou (||): APENAS UMA DAS EXPRESSÕES PRECISA SER VERDADEIRA PARA TUDO SER VERDADE

int main(){
    // ex: gratuidade no atendimento (< 5 anos ou > 65 anos)

    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade <= 5 || idade >= 65){
        printf("Você tem acesso gratuito!\n");
    }
    else    
        printf("Infelizmente, você não tem acesso gratuito!\n");

    return 0;
}