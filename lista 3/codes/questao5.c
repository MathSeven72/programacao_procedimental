/*
 * Arquivo: questao5.c
 * Compilação: gcc -std=c99 questao5.c -o questao5
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int n1, n2;

    // Leitura do tamanho das sequências
    printf("Digite o tamanho da primeira sequência (n1): ");
    scanf("%d", &n1);
    printf("Digite o tamanho da segunda sequência (n2): ");
    scanf("%d", &n2);

    // Verificação se o tamanho das sequências é válido
    if (n1 > 50 || n2 > 50 || n1 < 0 || n2 < 0) {
        printf("Erro: Tamanho das sequências deve ser no máximo 50 e positivo.\n");
        return 1; // Encerra o programa com erro
    }

    // Leitura dos elementos das sequências
    int v1[n1], v2[n2];
    printf("Digite os elementos da primeira sequência (v1) em ordem crescente:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &v1[i]);
    }
    printf("Digite os elementos da segunda sequência (v2) em ordem crescente:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &v2[i]);
    }

    // Intercalação das sequências em v3
    int v3[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (v1[i] < v2[j]) {
            v3[k++] = v1[i++];
        } else {
            v3[k++] = v2[j++];
        }
    }

    // Copia os elementos restantes de v1 e v2, se houverem
    while (i < n1) {
        v3[k++] = v1[i++];
    }

    while (j < n2) {
        v3[k++] = v2[j++];
    }

    // Imprime o vetor intercalado v3
    printf("Vetor intercalado em ordem crescente (v3):\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");


    return EXIT_SUCCESS;
}
