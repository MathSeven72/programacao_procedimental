/*
 * Arquivo: Questao1.c
 * Compilação: gcc -std=c99 Questao1.c -o Questao1
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

        int a, b, c, d;
        d = 3;
        c = 2;
        b = 4;
        d = c + b;
        printf("c + b = %d\n", d);/*6*/
        a = d + 1;
        printf("d + 1 = %d\n", a); /*7*/
        a = a + 1;
        printf("a + 1 = %d\n", a); /*8*/

    return EXIT_SUCCESS;
}
