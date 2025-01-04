// Como comparar duas strings com a função strcmp():

#include <stdio.h>
#include <string.h>

int main(){

    char frase1[] = "peixe";
    char frase2[] = "cachorro";

    printf("\n\nResultado: %d\n\n", strcmp(frase1, frase2));

    // Se o resultado = 0, as duas strings são iguais.

    // Se o resultado < 0, string1 é menor que string2. (sequencia dicionario)

    // Se o resultado > 0, string1 é maior que a string2. (sequencia dicionario)

    return 0;
}