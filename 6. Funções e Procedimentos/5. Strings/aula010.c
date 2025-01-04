// Procurando caracter em uma string com as funções strchr() e strrchr():

// strchr -> retorna a primeira ocorrência.

// strrchr -> retorna a ultima ocorrencia.

#include <stdio.h>
#include <string.h>

int main(){

    char nome1[20] = "Lucas Borges";

    char *letra; // -> ponteiro

    letra = strchr(nome1, 'i'); 

    // char *strchr(const char *__s, int __c) -> retorna um ponteiro

    

    return 0;
}