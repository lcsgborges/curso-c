# include <stdio.h>

int soma(int a, int b){
    return a+b;
}

int subtracao(int a, int b){
    return a - b;
}

int multiplicacao(int a, int b){
    return a * b;
}

int divisao(int a, int b){
    return a/b;
}

int resto(int a, int b){
    return a % b;
}

int exponenciacao(int a, int b){
    int i = 1;
    while(b > 0){
        i = i * a;
        b--;
    }
    return i;
}

int main(){

    int opcao, a, b;

    printf("-----------------------------------------------------------------\n");
    printf("--------------------------CALCULADORA----------------------------\n");
    printf("-----------------------------------------------------------------\n");

    do
    {
        printf("\n1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Resto\n6. Exponenciação\n0. Sair\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite dois números: ");
            scanf("%d%d", &a, &b);
            printf("Resultado = %d\n", soma(a, b));
            break;
        case 2:
            printf("Digite dois números: ");
            scanf("%d%d", &a, &b);
            printf("Resultado = %d\n", subtracao(a, b));
            break;
        case 3:
            printf("Digite dois números: ");
            scanf("%d%d", &a, &b);
            printf("Resultado = %d\n", multiplicacao(a, b));
            break;
        case 4:
            printf("Digite dois números: ");
            scanf("%d%d", &a, &b);
            if(b == 0){
                printf("Não é permitido divisão por 0.\n");
                break;
            }
            else{
                printf("Resultado = %d\n", divisao(a, b));
                break;
            }
        case 5:
            printf("Digite dois números: ");
            scanf("%d%d", &a, &b);
            printf("Resultado = %d\n", resto(a, b));
            break;
        case 6:
            printf("Digite dois números: ");
            scanf("%d%d", &a, &b);
            printf("Resultado = %d\n", exponenciacao(a, b));
            break;
        default:
            if(opcao != 0)
                printf("entrada invalida\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}