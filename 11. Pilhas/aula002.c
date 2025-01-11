// Criando pilha:

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    struct no *prox;
    int item;
}No;

typedef struct{
    No *topo;
    int tam;
}Pilha;

int pega_digito(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    return n;
}

void print_digito(int item){
    printf("\nElemento removido: %d\n\n", item);
}

Pilha* criarPilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->tam = 0;
    p->topo = NULL;
    return p;
}

void push(Pilha *p){
    No *novo = (No*) malloc(sizeof(No));
    novo->item = pega_digito();
    novo->prox = p->topo;
    p->topo = novo;
    p->tam++;
}

int pop(Pilha *p){
    if (p->topo == NULL){
        printf("Pilha vazia.\n");
        return -1;
    }
    No *remove = (No*) malloc(sizeof(No));
    remove = p->topo;
    int item = remove->item;
    p->topo = remove->prox;
    free(remove);
    p->tam--;
    return item;
}

void imprime(Pilha *p){
    if (p->tam == 0){
        printf("Pilha vazia.\n");
    }

    No *atual = p->topo;
    while (atual != NULL){
        printf("%d -> ", atual->item);
        atual = atual->prox;
    }
    printf("NULL\n");
}

int main(){
    Pilha *p;
    int item,opcao;
    p = criarPilha();

    do
    {
        printf("1.Empilhar\n2.Desempilhar\n3.Imprimir\n0.Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            push(p);
            break;
        case 2:
            item = pop(p);
            if(item != -1){
                print_digito(item);
            }
            else
                printf("Não há nó a remover.\n");
            break;
        case 3:
            imprime(p);
            break;
        
        default:
            if(opcao != 0)
                printf("INVÁLIDO!\n");
            break;
        }

    } while (opcao != 0);
    
    return 0;
}