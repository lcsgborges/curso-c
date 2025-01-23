// Como descobrir o tamanho de uma String com a função strlen():

#include <stdio.h>
#include <string.h> // biblioteca que tem a função strlen();

int main(){

    char frase[] = "Bom dia. Meu nome é Lucas Guimarães Borges.";
    int i;  

    i = strlen(frase); // size_t strlen(const char *__s) ( i recebe o tamanho da string)

    printf("Tamanho da string = %d\n", i);

    return 0;
}