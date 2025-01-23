// Criando uma função que retorna o tamanho de uma string:


#include <stdio.h>
#include <string.h> // para usar strlen();

int tamString(char vet[]){ // tipo de retorno - identificador - parâmetros

int tam = 0;

while (vet[tam] != '\0'){ // '\0' -> identificador de final de string
    tam++;
}

return tam;
}

int main(){

char vet[50];
int x;

printf("Digite alguma frase:\n");
scanf("%50[^\n]", vet);

x = tamString(vet);

printf("Sua frase possui %d caracteres.\n", x);

return 0;
}