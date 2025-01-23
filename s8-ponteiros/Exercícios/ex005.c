// Faça a função strcopy(char *destino, *char origem) usando ponteiros;

#include <stdio.h>
#include <string.h>

void string_copy(char *destino, char *origem){
    int i = 0;
    while (origem[i] != '\0'){
        *(destino + i) = *(origem + i);
        i++;
    }
}

int main(){
    char vet[100], new[100];
    printf("digite alguma frase: ");
    scanf("%100[^\n]", vet);
    string_copy(new, vet);
    printf("novo vetor = %s\n", new);
    return 0;
}