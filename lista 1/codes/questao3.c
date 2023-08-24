/*
 * Arquivo: questao3.c
 * Compilação: gcc -std=c99 questao3.c -o questao3
 * Autor: Matheus Souza 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int a, b;
    a = 73;
    b = 14;
    printf("73 - 14 = %d", a-b);

    return EXIT_SUCCESS;
}
