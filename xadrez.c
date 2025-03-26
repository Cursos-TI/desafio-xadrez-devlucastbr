#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Defini as variaveis que guardam o número de movimentação de cada peça
int NUMERO_CASAS_TORRE = 5;
int NUMERO_CASAS_BISPO = 5;
int NUMERO_CASAS_RAINHA = 8;
int MOVIMENTACAO_CAVALO = 1;

// Implementação das funções recursivas da movimentação das peças para o desafio nivel Mestre:
void moverTorre(int casas) {
    if(casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }        
}
void moverBispo(int casas) {
    if(casas > 0) {
        printf("Cima,Direita\n");
        moverBispo(casas - 1);
    }        
}
void moverRainha(int casas) {
    if(casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }        
}
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
    
    printf("Desafios Níveis Novato e Aventureiro - Movimentação das Peças:\n");
    // Desafio Nivel Novato
    // Movimentação da peça Torre usando for: 5 casas para a direita
    printf("Movimentação Torre:\n");
    for (int i=0; i<NUMERO_CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");
    // Movimentação da peça Bispo usando while: 5 casas para cima e direita
    printf("Movimentação Bispo:\n");
    int i = 0;
    while (i < NUMERO_CASAS_BISPO)
    {
        printf("Cima,Direita\n");
        i++;
    }
    printf("\n");
    // Movimentação da peça Rainha usando do-while: 8 casas para esquerda
    printf("Movimentação Rainha:\n");
    i = 0;
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < NUMERO_CASAS_RAINHA); 
    printf("\n");

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
    printf("\n");

    // Desafio Nivel Mestre
    printf("Desafio Nível Mestre - Movimentação das Peças:\n");
    // Usando as funções recursivas para movimentação da torre, bispo e rainha
    printf("Movimentação Torre:\n");
    moverTorre(NUMERO_CASAS_TORRE);
    printf("\n");
    printf("Movimentação Bispo:\n");
    moverBispo(NUMERO_CASAS_BISPO);
    printf("\n");
    printf("Movimentação Rainha:\n");
    moverRainha(NUMERO_CASAS_RAINHA);
    printf("\n");
    // Usando Loop Aninhado com multiplas variaveis para movimentação do cavalo e bispo
    printf("Movimentação Cavalo:\n");
    // Loop aninhado com a e b controlando as movimentações
    MOVIMENTACAO_CAVALO=1;
    int a;
    int b;
    for (int a = 0, b = MOVIMENTACAO_CAVALO; a < b; a++, b--) {
        // Loop interno para o movimento Cima 2 vezes
        for (int k = 0; k < 2; k++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
    printf("\n");
    printf("Movimentação Bispo com loop aninhado:\n");
    NUMERO_CASAS_BISPO=10;
    int c;
    int d;
    for (int c = 0, d = NUMERO_CASAS_BISPO; c < d; c++, d--) {
        printf("Cima\n");
        // Loop interno para o movimento Direita 1 vez
        for (int k = 0; k < 1; k++) {
            printf("Direita\n");
        }
    }
    return 0;  
}
