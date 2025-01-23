// DE QUANTA MEMÓRIA UMA STRUCT PRECISA?

#include <stdio.h>

typedef struct{

    char nome[20];  // 20 bytes;
    char cor[10]; // 10 bytes;
    int idade; // 4 bytes; 
    
    // 34 bytes total. processador tá usando 2 bytes pra organizar essas informações (36 bytes) -> se todas forem do mesmo tipo, usará apenas os bytes necessários por cada variável, pois o processador vai trata isso como um grande vetor.

} Cachorro;

int main(){

    Cachorro dog;

    printf("%lu\n", sizeof(dog));

    return 0;
}