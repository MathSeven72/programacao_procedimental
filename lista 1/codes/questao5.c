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

    int a=5, b=2;
    float c=5.0;
    double d=2.0;
    printf("%d \n", a/b);/*2*/
    printf("%f \n", a/d);/*2.500000*/
    printf("%f \n", c/d);/*2.500000*/

    return EXIT_SUCCESS;
}
