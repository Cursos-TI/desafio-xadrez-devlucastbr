#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Defini as variaveis que guardam o número de movimentação de cada peça
int NUMERO_CASAS_TORRE = 5;
int NUMERO_CASAS_BISPO = 5;
int NUMERO_CASAS_RAINHA = 8;
int MOVIMENTACAO_CAVALO = 1;
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    // Desafio Nivel Novato
    // Movimentação da peça Torre usando for: 5 casas para a direita
    printf("Movimentação Torre:\n");
    for (int i=0; i<NUMERO_CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    // Movimentação da peça Bispo usando while: 5 casas para cima e direita
    printf("Movimentação Bispo:\n");
    int i = 0;
    while (i < NUMERO_CASAS_BISPO)
    {
        printf("Cima,Direita\n");
        i++;
    }
    // Movimentação da peça Rainha usando do-while: 8 casas para esquerda
    printf("Movimentação Rainha:\n");
    i = 0;
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < NUMERO_CASAS_RAINHA); 

    // Desafio Nivel Aventureiro
    // Movimentação da peça Cavalo usando for e while: 2 casas para cima e 1 para direita
    printf("Movimentação Cavalo:\n");
    while (MOVIMENTACAO_CAVALO--)
    {
        for(int i=0; i<2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    
    return 0;  
}
