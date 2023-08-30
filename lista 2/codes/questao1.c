/*
 * Arquivo: questao1.c
 * Compilação: gcc -std=c99 questao1.c -o questao1
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    printf("%d\n", (8>9) && (10!=2)); /* 0 */
    printf("%d\n", (14 > 100) || (2>1)); /* 1 */
    printf("%d\n", ( !(14>100) && !(1>2) ) ); /* 1 */

    return EXIT_SUCCESS;
}
