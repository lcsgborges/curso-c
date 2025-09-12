// Como criar novos tipos de dados em C com TYPEDEF STRUCT:

// lembra um pouco o conceito de orientação a objetos de classes e objetos;

#include <stdio.h>
#include <string.h>

// caixa Pessoa com caracteristicas próprias  
typedef struct{
    char sexo;
    int idade;
    char nome[50];
}Pessoa;                   

struct Pessoa2{           // outro jeito de criar uma struct
    int idade;
    char sexo;
    char nome[50];
};

int main(){

    Pessoa pessoa1;
    // struct Pessoa2 pessoa2; // diferença das duas formas;

    pessoa1.idade = 20;
    pessoa1.sexo = 'm';
    strcpy(pessoa1.nome, "Lucas Borges");

    printf("%d %c %s \n", pessoa1.idade, pessoa1.sexo, pessoa1.nome);

    return 0;
}