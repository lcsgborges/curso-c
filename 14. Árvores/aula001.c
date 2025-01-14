#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    struct no *esq, *dir;
    int dado;
} No;

No *criaNo(int valor){
        No *novo = (No*) malloc(sizeof(No));
        novo->dado = valor;
        novo->esq = NULL;
        novo->dir = NULL;
        return novo;
}

No *insereNo(No *raiz, int valor){
    if (raiz == NULL){
        return criaNo(valor);
    }
    else{
        if(valor < raiz->dado)
            raiz->esq = insereNo(raiz->esq, valor);
        else
            raiz->dir = insereNo(raiz->dir, valor);
    }   
    return raiz;
}

void inOrder(No *raiz){
    if (raiz != NULL){
        inOrder(raiz->esq);
        printf("%d ", raiz->dado);
        inOrder(raiz->dir);
    }
}

void preOrder(No *raiz){
    if (raiz != NULL){
        printf("%d ", raiz->dado);
        preOrder(raiz->esq);
        preOrder(raiz->dir);
    }
}

void posOrder(No *raiz){
    if (raiz != NULL){
        preOrder(raiz->esq);
        preOrder(raiz->dir);
        printf("%d ", raiz->dado);
    }
}

int main(){
    No *raiz = NULL;
    raiz = insereNo(raiz, 10);
    raiz = insereNo(raiz, 20);
    raiz = insereNo(raiz, 18);
    raiz = insereNo(raiz, 4);
    raiz = insereNo(raiz, 6);
    inOrder(raiz);
    printf("\n");
    preOrder(raiz);
    printf("\n");
    posOrder(raiz);
    printf("\n");
    return 0;
}