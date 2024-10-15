#include <stdio.h>
#include <locale.h> // para usar mais simbolos no windows.

// Acentuação e Tabela ASCII:
// 9 -> \t
// 10 -> \n
// 65 -> A 
// 66 -> B


int main(){
    
    setlocale(LC_ALL,"Portuguese"); // para poder usar a tabela ASCII completa

    char letra = 'A';
    printf("A na tabela ASCII: %d\n", letra); 

    printf("104 na tabela ASCII representa: %c\n", 104); // 1 byte -> -128 até 127
                                                         // utilizando unsigned 1 byte -> 0 até 255 (mais simbolos.)
    return 0;
}