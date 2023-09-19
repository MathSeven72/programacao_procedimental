/*
 * Arquivo: questao8.c
 * Compilação: gcc -std=c99 questao8.c -o questao8
 * Autor: AUTHOR
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>




int isSubsequence(const char *T1, const char *T2) {
    int lenT1 = strlen(T1);
    int lenT2 = strlen(T2);
    
    int i = 0; // Índice para T1
    int j = 0; // Índice para T2
    
    while (i < lenT1 && j < lenT2) {
        if (T1[i] == T2[j]) {
            i++; // Avança o índice de T1
        }
        j++; // Avança o índice de T2
    }
    
    return (i == lenT1); // Se i for igual ao comprimento de T1, T1 é subsequência de T2
}

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    char T1[100], T2[100];
    
    printf("Digite a string T1: ");
    gets(T1); // Leitura da string T1
    
    printf("Digite a string T2: ");
    gets(T2); // Leitura da string T2
    
    if (isSubsequence(T1, T2)) {
        printf("T1 e uma subsequencia de T2.\n");
    } else {
        printf("T1 nao e uma subsequencia de T2.\n");
    }

    return EXIT_SUCCESS;
}
