/*  PILHAS
PUSH -> empilhar
POP  -> desempilhar

essas operações são feitas no topo;

LIFO (LAST IN, FIRST OUT)

trabalhamos com ponteiros

*TOPO -> aponta para o primeiro elemento, o topo da pilha

as inserções são sempre no topo

precisaremos criar um nó:

typedef struct no{
    int dado;
    struct no *proximo;
} No;

typedef char item
typedef struct {
    int dado;
    item *proximo;
} No;
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia, mes, ano;
} Data;

typedef struct{
    char nome[50];
    Data dataNasc;
} Pessoa;

typedef struct no{
    struct no *next;
    Pessoa p;
} No;

Pessoa lerPessoa(){
    Pessoa p;
    printf("Digite seu nome: ");
    scanf("%49[^\n]", p.nome); // vetor não precisar do &;
    printf("Digite sua data de nascimento no formato dd mm aaaa (use apenas espaços): ");
    scanf("%d%d%d", &p.dataNasc.dia, &p.dataNasc.mes, &p.dataNasc.ano);
    return p;
}

void printPessoa(Pessoa p){
    printf("\n\tNome: %s\n", p.nome);
    printf("\tData de nascimento: %2d/%2d/%4d\n", p.dataNasc.dia, p.dataNasc.mes, p.dataNasc.ano);
}

 No* push(No *topo){
    No *novo = (No*) malloc(sizeof(No));

    if (novo){
        novo->p = lerPessoa();
        novo->next = topo;
        return novo;
    }   
    else    
        printf("Erro ao alocar memória!");
    return NULL;
}

No* pop(No **topo){ // quero mexer no conteudo, logo ponteiro de ponteiro;
    if(*topo){
        No *remover = *topo; // nó remover pega o conteudo do topo;
        *topo = remover->next;
        return remover;
    }
    else    
        printf("\nPilha vazia!\n");
    return NULL;
}

void printPilha(No *topo){
    printf("\n-----PILHA-----\n");
    while (topo != NULL){
        printPessoa(topo->p);
        topo = topo->next;
    }
}

int main(){
    int opcao;
    No *topo = NULL, *remover;

    do {
    printf("\n1. Empilhar\n2. Desempilhar\n3. Imprimir\n0. Sair\n");
    scanf("%d", &opcao);
    getchar();
    
        switch (opcao)
        {
        case 1:
            topo = push(topo);
            break;
        case 2:
            remover = pop(&topo);
            if(remover){
                printf("Elemento removido:");
                printPessoa(remover->p);
            }
            else    
                printf("Não há nó a remover!\n");
            break;
        case 3:
            printPilha(topo);
            break;
        default:
            if (opcao!=0)
                printf("Opção inválida!");
            break;
        }
    } while (opcao != 0);
    
    return 0;
}