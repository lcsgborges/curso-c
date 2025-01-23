// Busca Binária:

// os elementos precisam estar ordenados;

// primeira comparação: indice central = (l + r)/2

// paradigma da divisão e conquista;

// custo: O(log(n))

#include <stdio.h>
#include <time.h>

int busca_binaria(int vet[], int inicio, int fim, int elemento){
    int m = (inicio + fim)/2;

    if (inicio > fim)
        return -1;

    if (vet[m] == elemento)
        return m;
    
    if (elemento > vet[m])
        return busca_binaria(vet, m+1, fim, elemento);
    else
        return busca_binaria(vet, inicio, m-1, elemento);
}


int main(){
   
    int vet[50] = {
     3,  7, 10, 12, 15, 19, 21, 23, 25, 27, 30, 33, 35, 38, 40,42, 45, 47, 50, 52, 55, 57, 60, 62, 64, 67, 69, 71, 73, 76, 78, 80, 82, 84, 87, 89, 91, 93, 95, 97, 99, 102, 105, 107,110, 112, 115, 117, 120, 123};
    int x = busca_binaria(vet, 0, 50, 102), i;

    printf("vetor: ");
    for (i = 0; i < 50; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");

    if (x != -1)
        printf("achou\n");
    else    
        printf("nao achou\n");

    return 0;
}