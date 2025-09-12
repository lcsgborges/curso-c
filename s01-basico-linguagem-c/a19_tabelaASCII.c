// Tabela ASCII

// Tabela que transforma bytes em caracteres alfanuméricos e símbolos:

// Exemplo:

// Acentuação e Tabela ASCII:
// 9 -> \t
// 10 -> \n
// 65 -> A 
// 66 -> B

#include <stdio.h>


int main(){
    
    char letra = 'A';
    printf("A na tabela ASCII: %d\n", letra); 

    printf("104 na tabela ASCII representa: %c\n", 104); 

    return 0;
}