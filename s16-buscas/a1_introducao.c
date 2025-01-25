/*
    Objetivo: recuperação de informação a partir de dados previamente armazenados.
    
    A informação é dividida em registros que possuem uma chave (índices)

    Ex: buscas sequenciais, buscas binárias, árvores de busca
*/

// Busca Sequencial:

// método de pesquisa mais simples existente, a partir do primeiro registro, pesquisa sequencialmente até encontrar a chave procurada

// os registros estão organizados em uma estrutura de dados do tipo array ou lista encadeada.

// Complexidade de busca (dados não ordenados):

// melhor caso: O(1) -> primeiro elemento
// caso médio: O(n) 
// pior caso: O(n)

// ou seja, em geral, a busca sequencial é O(n)

/*  listas encadeadas:
    - insercao e remoção: O(1)
    - busca O(n)

    vetores não-ordenados:
    - inserção e remoção: O(1)
    - busca O(n)

    vetores ordenados:
    - busca O(lg(n))
    - inserção e remoção: O (n)

*/

