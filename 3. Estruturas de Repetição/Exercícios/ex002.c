/*
Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
encerrado. Considere que a senha correta é o valor 123456.
*/

#include <stdio.h> 

int main(){

    int senha;
    
    printf("Senha: \n");
    scanf("%d", &senha);

    while(senha != 123456) {
        printf("Senha inválida. Tente novamente: ");
        scanf(" %d", &senha); 
    }

    printf("Acesso permitido...\n");

    return 0;
}