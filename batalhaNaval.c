#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Tabuleiro 10x10 preenchido com água (0)
    int tabuleiro[10][10];

    // Inicializando o tabuleiro com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navios (vetores de tamanho 3)
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // Coordenadas iniciais dos navios
    int linhaH = 2;
    int colunaH = 2;

    int linhaV = 5;
    int colunaV = 7;

    // Posicionamento do navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // Posicionamento do navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // EXIBIÇAO DO TABULEIRO COM COORDENADAS
    printf("TABULEIRO:\n\n");

    // Imprimir Letras das Colunas

     printf("    "); // alinhamento 
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
    for (int j = 0; j < 10; j++) {
        printf("%c ", letras[j]);
    }
    printf("\n");

    // Imprimir números das Linhas
    for (int i = 0; i < 10; i++) {
        printf("%d   ", i+1);  // imprime as letras das colunas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
