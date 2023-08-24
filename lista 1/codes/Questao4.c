/*
 * Arquivo: Questao4.c
 * Compilação: gcc -std=c99 Questao4.c -o Questao4
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int a,b;
    char h;
    a = 10;
    b = -15;
    h ='A';
    a = b;
    b++;
    a = (b+a);
    printf("A = %d", a); /*A = -29*/

    return EXIT_SUCCESS;
}
