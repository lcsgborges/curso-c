// Como copiar uma string em C com a função strcpy():

#include <stdio.h>
#include <string.h>

int main(){

    char nome1[20] = "Lucas Borges";
    char nome2[20];

    // char * strcpy(char *__restrict__ __dest, const char *__restrict__ __src)

    strcpy(nome2, nome1); // copiei o conteudo de nome1 para nome2.
    
    printf("%s\n", nome2);

    return 0;
}