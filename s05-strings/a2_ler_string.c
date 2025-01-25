// Como ler strings com a função scanf():

#include <stdio.h>

int main(){
    char nome[50];

    printf("Digite seu nome completo: ");
    
    scanf("%50[^\n]", nome); // não precisa utilizar o '&', pois o vetor já é um ponteiro (??)

    printf("Nome = %s\n\n", nome);

    // para ler espaços, precisamos utlizar %50[^\n]:

    return 0;
}