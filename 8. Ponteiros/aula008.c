// Ponteiro para ponteiro:

#include <stdio.h>

int main(){

    int a = 4;
    int *p1; // ponteiro de variavel;
    int **p2; // ponteiro de ponteiro;

    p1 = &a;
    p2 = &p1; // ponteiro de ponteiro;

    printf("Conteudo de A:  %d\tEndereço de A: %p\n", a, &a);
    printf("Conteudo de p1: %p\tEndereço de p1: %p\n", p1, &p1);
    printf("Conteúdo de p2: %p\n", p2);
    
    printf("Conteúdo apontado por p1: %d\n", *p1);
    
    // podemos usar dois asteriscos (**) para se referir ao conteudo apontado pelo ponteiro que eu estou apontando, exemplo:

    printf("p2 aponta para p1 que aponta para A: %d\n", **p2); 


    return 0;
}