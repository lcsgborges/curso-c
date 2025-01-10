// Como passar um ponteiro como parâmetro para uma função ou procedimento:

#include <stdio.h>

void imprime(int *num){

    printf("Imprimindo: %d\n", *num); // apenas imprime uma cópia de idade armazenada nessa nova variável num.

    // se eu quiser alterar o conteúdo do parâmetro, preciso usar ponteiro, pois consigo utilizar o mesmo endereço de memória, já que nesse caso aqui, num e idade tem endereços diferentes.

    printf("Endereço de num aqui: %p\n", &num);

    // alterando o conteudo de idade:

    *num = 50;
}

int main(){

    int idade = 10;

    imprime(&idade); 

    // endereço de idade:

    printf("Endereço de idade: %p\n", &idade); // endereço idade != endereço num

    // entretanto, posso passar o endereço de idade pra função imprime e modificar o conteúdo de idade;

    printf("Idade nova: %d\n", idade);

    return 0;
}