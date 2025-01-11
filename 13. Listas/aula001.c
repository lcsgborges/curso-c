// Listas encadeadas: é uma sequência de elementos encadeados sem restrições;
// operações:
// inserir no inicio / meio / fim
// inserir ordenado
// remoção no inicio / meio / fim
// busca

// como inserir no inicio de uma lista encadeada:

#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    struct node *next;
    int data;
}No;

typedef struct list{
    int size;
    No *head; // aponta para o proximo elemento da lista;
}List;

List* createList(){
    List *list = (List*) malloc(sizeof(List));
    list->size = 0;
    list->head = NULL;
    return list;
}

No* insereInicio(List *list, int data){
    No *no = (No*)malloc(sizeof(No));
    no->data = data;
    no->next = list->head;
    list->head = no;
    list->size++;
    return no;
}

void printList(List *list){
    No *current = list->head;

    while (current != NULL){
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main(){
    List *lista = createList();
    insereInicio(lista, 10);
    insereInicio(lista, 11);
    insereInicio(lista, 12);
    printList(lista);
}