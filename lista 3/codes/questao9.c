/*
 * Arquivo: questao9.c
 * Compilação: gcc -std=c99 questao9.c -o questao9
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int n; // Tamanho da matriz (n x n)

    // Leitura do tamanho da matriz
    printf("Digite o tamanho da matriz (n x n): ");
    scanf("%d", &n);

    int matriz[n][n];

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma da primeira linha (usaremos isso como referência)
    int soma_referencia = 0;
    for (int j = 0; j < n; j++) {
        soma_referencia += matriz[0][j];
    }

    // Verificação das somas das linhas e colunas
    for (int i = 1; i < n; i++) {
        int soma_linha = 0;
        int soma_coluna = 0;

        for (int j = 0; j < n; j++) {
            soma_linha += matriz[i][j];
            soma_coluna += matriz[j][i];
        }

        if (soma_linha != soma_referencia || soma_coluna != soma_referencia) {
            printf("Nao e um quadrado magico.\n");
            return 0;
        }
    }

    // Verificação da soma da diagonal principal
    int soma_diag_principal = 0;
    for (int i = 0; i < n; i++) {
        soma_diag_principal += matriz[i][i];
    }

    if (soma_diag_principal != soma_referencia) {
        printf("Nao e um quadrado magico.\n");
        return 0;
    }

    // Verificação da soma da diagonal secundária
    int soma_diag_secundaria = 0;
    for (int i = 0; i < n; i++) {
        soma_diag_secundaria += matriz[i][n - 1 - i];
    }

    if (soma_diag_secundaria != soma_referencia) {
        printf("Nao e um quadrado magico.\n");
        return 0;
    }

    // Se passou por todas as verificações, é um quadrado mágico
    printf("E um quadrado magico.\n");
    return EXIT_SUCCESS;
}
