/*
 * Arquivo: questao4.c
 * Compilação: gcc -std=c99 questao4.c -o questao4
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int n, m;
    
    // Leitura do tamanho das sequências
    printf("Digite o tamanho da primeira sequência (n): ");
    scanf("%d", &n);
    printf("Digite o tamanho da segunda sequência (m): ");
    scanf("%d", &m);

    // Verificação se n <= m
    if (n > m) {
        printf("Erro: O tamanho da primeira sequência (n) deve ser menor ou igual ao tamanho da segunda sequência (m).\n");
        return 1; // Encerra o programa com erro
    }

    // Leitura dos elementos das sequências
    int v1[n], v2[m];
    printf("Digite os elementos da primeira sequência (v1):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v1[i]);
    }
    printf("Digite os elementos da segunda sequência (v2):\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &v2[i]);
    }

    // Contagem de ocorrências de v1 em v2
    int ocorrencias = 0;
    for (int i = 0; i <= m - n; i++) {
        int igual = 1;
        for (int j = 0; j < n; j++) {
            if (v1[j] != v2[i + j]) {
                igual = 0;
                break;
            }
        }
        if (igual) {
            ocorrencias++;
        }
    }

    // Imprime o resultado
    printf("A primeira sequência ocorre %d vezes na segunda sequência.\n", ocorrencias);
    /* -- seu código aqui -- */

    return EXIT_SUCCESS;
}
