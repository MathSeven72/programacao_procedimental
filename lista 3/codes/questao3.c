/*
 * Arquivo: questao3.c
 * Compilação: gcc -std=c99 questao3.c -o questao3
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif


    int numeros[10];
    int x;

    // Leitura dos 10 números inteiros
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    // Leitura do número inteiro x
    printf("Digite o número inteiro x:\n");
    scanf("%d", &x);

    // Procura por dois números cuja multiplicação seja igual a x
    int encontrou = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (numeros[i] * numeros[j] == x) {
                printf("Os números %d e %d têm uma multiplicação igual a %d.\n", numeros[i], numeros[j], x);
                encontrou = 1;
            }
        }
    }

    // Se nenhum par de números foi encontrado
    if (!encontrou) {
        printf("Não existem dois números cuja multiplicação seja igual a %d.\n", x);
    }

    return EXIT_SUCCESS;
}
