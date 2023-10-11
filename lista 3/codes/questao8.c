/*
 * Arquivo: questao8.c
 * Compilação: gcc -std=c99 questao8.c -o questao8
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int matriz[4][4];
    int transposta[4][4];

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da matriz transposta
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Impressão da matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Impressão da matriz transposta
    printf("Matriz transposta:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
