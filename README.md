# Organizador de Vetores

Olá! Este é um simples programa em C que criei para organizar um vetor de números inteiros utilizando o algoritmo de **Bubble Sort**. Ele recebe um conjunto de 10 números, insere esses valores em um vetor e depois os organiza em ordem crescente.

## Como Funciona

1. O programa solicita que você insira 10 números inteiros, um de cada vez.
2. Após a inserção de todos os números, ele os organiza em ordem crescente.
3. Os números organizados são então exibidos na tela.

## Estrutura do Código

O programa é composto por duas partes principais:
- **Função `organiza`:** Utiliza o algoritmo **Bubble Sort** para organizar o vetor. Esse método compara pares de elementos consecutivos e os troca se estiverem fora de ordem, repetindo esse processo até que o vetor esteja ordenado.
- **Função `main`:** Solicita a inserção de números, chama a função `organiza` para ordenar o vetor, e depois exibe os números organizados.
