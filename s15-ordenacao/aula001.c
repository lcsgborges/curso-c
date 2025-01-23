/*
    Ordenação de vetores:

    -> otimiza as buscas nos vetores

    Tipos de complexidade:
    
    -> quadráticos: simples e suficiente para arquivos pequenos

    -> linearítmicos: mais complexos e eficientes para arquivos grandes

    Estabilidade:
        mantém a posição relativa dos elementos (não há saltos)
        - estável
        - instável

    Adaptatividade:
        aproveita a ordenação existente
        diminui-se o custo

    Memória extra:
        -> in-place:
            - utiliza a própria estrutura
            - utiliza memória extra: pilha de execução, variáveis auxiliares
        
        -> not in-place:
            - utiliza mais uma estrutura
            - cópias

    Localização:
        -> interna: todos os dados cabem na memória principal

        -> externa: arquivo grande, é ordenado em pedaços (chunks) que caibam na memória principal
*/

// Selection Sort:

// passos:
// 1. selecionar o menor item
// 2. posicionar: troque com o primeiro item
// 3. seleconar o segundo menor item
// 4. posicionar: troque com o segundo item
// 5. repita para os n elementos do vetor

// complexidade O(n^2);