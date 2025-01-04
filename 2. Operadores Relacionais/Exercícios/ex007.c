/*
Faça um programa que peça ao usuário um caracter e diga se é vogal ou não.
*/

#include <stdio.h>

int main(){

    char carac;

    printf("Digite um caracter: ");
    scanf(" %c", &carac);

    if (carac == 'a' || carac == 'A' || carac == 'e' || carac == 'E' || carac == 'i' || carac == 'I' || carac == 'o' || carac == 'O' || carac == 'u' || carac == 'U')
        printf("Você digitou uma vogal.\n");
    else 
        printf("Você não digitou uma vogal.\n");
    
    return 0;
}