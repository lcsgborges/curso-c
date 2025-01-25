// Como ler um arquivo txt com a função fgetc():

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    char letra;
    file = fopen("/home/lucas/Documents/cursoC/conto.txt", "r");
    
    printf("Texto lido do arquivo: ");
    while (!feof(file)){           // feof -> retorna 1 se chegar no fim do arquivo, logo precisamos negar 
        letra = fgetc(file);
        printf("%c", letra);
    }

    return 0;
}