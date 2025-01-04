#include <stdio.h>

// Procedimento para imprimir uma string caracter por caracter:

void imprimeString(char vet[]){ // indica que não tem retorno.

int i = 0;

while (vet[i] != '\0'){
    printf("%c", vet[i]);
    i++;
}
}


int main(){

char vet[100];

printf("Digite uma frase: ");
scanf("%100[^\n]", vet);

imprimeString(vet);

printf("\n");

return 0;
}