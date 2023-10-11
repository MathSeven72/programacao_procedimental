/*
 * Arquivo: questao10.c
 * Compilação: gcc -std=c99 questao10.c -o questao10
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int n;

    // Leitura do tamanho das matrizes
    printf("Digite o tamanho das matrizes (n x n): ");
    scanf("%d", &n);

    // Declaração das matrizes A, B e C
    int A[n][n], B[n][n], C[n][n];

    // Leitura dos elementos da matriz A
    printf("Digite os elementos da matriz A %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Leitura dos elementos da matriz B
    printf("Digite os elementos da matriz B %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Cálculo da matriz C = A × B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Impressão da matriz C
    printf("Matriz resultante C %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
