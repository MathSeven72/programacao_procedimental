/*
 * Arquivo: questao7.c
 * Compilação: gcc -std=c99 questao7.c -o questao7
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int m, n;

    // Leitura das dimensões da matriz
    printf("Digite o número de linhas (m): ");
    scanf("%d", &m);
    printf("Digite o número de colunas (n): ");
    scanf("%d", &n);

    // Verificação das dimensões da matriz
    if (m <= 0 || n <= 0 || m > 100 || n > 100) {
        printf("Erro: As dimensões da matriz devem estar entre 1 e 100.\n");
        return 1; // Encerra o programa com erro
    }

    // Leitura da matriz de números reais
    double matriz[m][n];
    printf("Digite os elementos da matriz %dx%d:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    // Verificação de elementos repetidos
    int encontrouRepetido = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            double elementoAtual = matriz[i][j];

            // Verifica se o elemento atual se repete em toda a matriz
            for (int x = 0; x < m; x++) {
                for (int y = 0; y < n; y++) {
                    if (x != i || y != j) {
                        if (matriz[x][y] == elementoAtual) {
                            encontrouRepetido = 1;
                            break;
                        }
                    }
                }
                if (encontrouRepetido) {
                    break;
                }
            }
            if (encontrouRepetido) {
                break;
            }
        }
        if (encontrouRepetido) {
            break;
        }
    }

    if (encontrouRepetido) {
        printf("Existem elementos repetidos na matriz.\n");
    } else {
        printf("Não existem elementos repetidos na matriz.\n");
    }

    return EXIT_SUCCESS;
}
