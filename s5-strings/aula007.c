// Como concatenar duas strings com a função strcat():

#include <stdio.h>
#include <string.h>

int main(){

    char nome[50] = "Lucas";

    strcat(nome, ". Quantos anos você tem?"); 
    
    // char * strcat(char *__restrict__ __dest, const char *__restrict__ __src)

    printf("\n\t%s\n", nome);

    return 0;
}