/*
 * Arquivo: questao8.c
 * Compilação: gcc -std=c99 questao8.c -o questao8
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

long long int fat(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fat(n - 1);
    }
}
int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int numero;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O fatorial não está definido para números negativos.\n");
    } else {
        long long int resultado = fat(numero);
        printf("O fatorial de %d é %lld.\n", numero, resultado);
    }


    return EXIT_SUCCESS;
}
