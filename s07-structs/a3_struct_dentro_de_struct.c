// Usando uma struct dentro de outra struct:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int dia, mes, ano;
} Nascimento;

typedef struct{

    char nome[50];
    char sexo;
    int idade;
    Nascimento dataNas; // precisa ser definido Nascimento antes de usar ele.

} Pessoa;

int main(){

    Pessoa pessoa;
    pessoa.dataNas.ano = 2000;
    pessoa.dataNas.mes = 1;
    pessoa.dataNas.dia = 20;

    printf("%d / %.2d / %d\n", pessoa.dataNas.dia, pessoa.dataNas.mes, pessoa.dataNas.ano);

    return 0;
}