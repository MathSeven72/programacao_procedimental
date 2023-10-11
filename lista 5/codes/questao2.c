/*
 * Arquivo: questao2.c
 * Compilação: gcc -std=c99 questao2.c -o questao2
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int i) {
    if (i <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }
    for (int j = 2; j * j <= i; j++) {
        if (i % j == 0) {
            return 0; // Encontrou um divisor, não é primo
        }
    }
    return 1; // Se nenhum divisor foi encontrado, é primo
}

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int n;

    printf("Digite um valor inteiro n: ");
    scanf("%d", &n);

    printf("Números primos de 1 até %d:\n", n);
    for (int i = 1; i <= n; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return EXIT_SUCCESS;
}
