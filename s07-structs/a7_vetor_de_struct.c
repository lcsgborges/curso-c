// Como criar um vetor de structs:

#include <stdio.h>

int tam = 2;

typedef struct{
    int dia, mes, ano;
} DataNasc;

typedef struct{
    int idade;
    char nome[50];
    char sexo;
    DataNasc dataNasc;
} Pessoa;


Pessoa lerPessoa(){

    Pessoa p;

    printf("Qual seu nome: ");
    scanf(" %50[^\n]", p.nome);

    printf("Qual a sua idade: ");
    scanf("%d", &p.idade);

    printf("Qual seu sexo? [m]asculino [f]eminino: ");
    scanf(" %c", &p.sexo);

    printf("Qual sua data de nascimento? Escreve no formato dd mm aaaa (sem barras ou pontos): ");
    scanf("%d%d%d", &p.dataNasc.dia, &p.dataNasc.mes, &p.dataNasc.ano);

    printf("\n");

    return p;
}


void imprimePessoa(Pessoa p){

    printf("\tNome: %s\n", p.nome);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tIdade: %d\n", p.idade);
    printf("\tData de nascimento: %d/%d/%d\n", p.dataNasc.dia, p.dataNasc.mes, p.dataNasc.ano);
}


int main(){
    // CRIANDO UM VETOR DE PESSOAS AGORA:
    
    Pessoa pessoas[tam]; // criando 10 pessoas
    int i;

    for (i = 0; i < tam; i++){
        printf("Cadastro da pessoa %d:\n", i + 1);
        pessoas[i] = lerPessoa();
    }

    for (i = 0; i < tam; i++){
        printf("Pessoa %d: \n", i+1);
        imprimePessoa(pessoas[i]);
    }
    
    // É possível fazer a mesma coisa com matrizes, basta inicializar da maneiro correta:
    // Pessoa pessoas[][]; 

    return 0;
}