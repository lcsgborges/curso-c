// O que é e como criar ponteiros:

// ponteiros servem para armazenar endereço de memória;

#include <stdio.h>

int main(){

    int num = 10;
    int *p; // p é um ponteiro; precisa ser do tipo da variável que ele vai apontar;

    p = &num; // p aponta para o endereço da variável num;

    printf("Valor de num: %d\n", num); // conteudo de num;
    printf("Valor do endereço de num: %p\n", &num); // endereço de num;

    printf("Valor do conteúdo de p: %p\n", p); // endereço de num, apontado por p;

    //Se quisermos imprimir o conteúdo que tem dentro do endereço que p aponta, é só usar o asterisco:

    printf("Conteúdo dentro do endereço que p aponta: %d\n", *p);

    // O ponteiro p possui um endereço único de memória:

    printf("Endereço do ponteiro p: %p\n", &p);

    return 0;
}