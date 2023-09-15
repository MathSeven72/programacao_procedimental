/*
 * Arquivo: questão1.c
 * Compilação: gcc -std=c99 questão1.c -o questão1
 * Autor: Matheus Souza Da Costa 12021EEL021
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
