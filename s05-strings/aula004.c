// Como identificar o final de uma string:

// código de escape = \0. (null) -> indica o fim da string.

#include <stdio.h>

int main(){

    char frase[20] = "Hello, World!";
    int i;

    for(i = 0; i < 20; i++){
        printf("%d = %d\n", i, frase[i]); // sobra 7 espaços vazios (0 na ascii = '\0')
    }   

    // podemos utilizar um while para imprimir até chegar no '\0':

    i = 0;

    printf("\n\n");

    while (frase[i] != '\0'){
        printf("%d = %c\n", i, frase[i]); // imprime até o 12 ao invés de imprimir até o 19;
        i++;
    }

    printf("\n\n");

    return 0;
}