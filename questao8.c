/*
 * Arquivo: questao8.c
 * Compilação: gcc -std=c99 questao8.c -o questao8
 * Autor: AUTHOR
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    /* -- seu código aqui -- */

    return EXIT_SUCCESS;
}
