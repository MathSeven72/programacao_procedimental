/*
 * Arquivo: questao9.c
 * Compilação: gcc -std=c99 questao9.c -o questao9
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    
    int a, b;
    printf("%d\n",  9 > 3); /*1*/
    printf("%d\n",  (3*4)/2 != (2*3) ); /*0*/
    a = 1;
    b = -1;
    printf("%d\n", a!=b); /*1*/

    return EXIT_SUCCESS;
}
