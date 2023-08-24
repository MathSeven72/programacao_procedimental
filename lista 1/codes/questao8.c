/*
 * Arquivo: questao8.c
 * Compilação: gcc -std=c99 questao8.c -o questao8
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int a=5, b, c;
    b = ++a;
    c = a++;
    printf("a: %d \n", a); /*7*/
    printf("b: %d \n", b); /*6*/
    printf("c: %d \n", c); /*6*/

    return EXIT_SUCCESS;
}
