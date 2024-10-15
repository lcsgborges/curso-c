#include <stdio.h>

// Operador de decremento --:

int main(){

    // Funcionamento semelhante com o encremento, mas agora subtraindo 1.

    int contador = 1;
    int numero = 10;


    printf("Contador = %d\n", contador);
    contador--;
    printf("Contador = %d\n", contador);

    printf("10 - 1 = %d\n", --numero); // primeiro decrementa e depois a função ocorre.

    return 0;
}