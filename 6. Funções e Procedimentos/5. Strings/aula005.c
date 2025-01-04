// Como descobrir o tamanho de uma string? 

// Podemos utilizar a noção de que o fim de uma string possui o caracter '\0'.  

#include <stdio.h>

int main(){

    int i = 0;
    char frase[] = "Lorem ipsum dolor sit amet, consectetur adipisci elit, sed eiusmod tempor incidunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur.";

    while (frase[i] != '\0'){ // contamos tudo até o caracter de escape.
        i++; 
    }   

    printf("Tamanho da string: %d\n", i); 

    return 0;
}