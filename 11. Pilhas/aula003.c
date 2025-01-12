#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    struct no *proximo;
    int dado;
}No;

typedef struct pilha{
    No *topo;
}Pilha;

void criaPilha(Pilha *p){
    p->topo = NULL;
}

void push(int dado, Pilha *p){
    No *ptr = (No*) malloc(sizeof(No));
    if(ptr == NULL){
        printf("Erro de alocação\n");
        return;
    }
    ptr->dado = dado;
    ptr->proximo = p->topo;
    p->topo = ptr;
}

int pop(Pilha *p){
    No *remove = p->topo;
    if (remove == NULL){
        printf("Pilha vazia\n");
        return;
    }
    p->topo = remove->proximo;
    int dado = remove->dado;
    free(remove);
    printf("Dado removido: %d\n", dado);
    return dado;
}   

void imprimePilha(Pilha *p){
    No *ptr = p->topo;
    if (ptr == NULL){
        printf("Pilha vazia\n");
        return;
    }
    printf("Pilha: \n");
    while(ptr != NULL){
        printf("%d\n", ptr->dado);
        ptr = ptr->proximo;
    }
}

int main(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    if(p == NULL){
        printf("Erro de alocação\n");
    }
    else{
        criaPilha(p);
        push(10, p);
        push(20, p);
        push(30, p);
        imprimePilha(p);
        pop(p);
        pop(p);
        imprimePilha(p);
        push(50, p);
        push(40, p);
        pop(p);
        imprimePilha(p);
        pop(p);
        pop(p);
        pop(p);
        imprimePilha(p);
    }
    return 0;
}