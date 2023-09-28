/*
 * Arquivo: questao7.c
 * Compilação: gcc -std=c99 questao7.c -o questao7
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif


    char T[1000], p[100];
    
    printf("Digite a string T: ");
    gets(T); // Leitura da string T
    
    printf("Digite a string p: ");
    gets(p); // Leitura da string p
    
    int lenT = strlen(T);
    int lenP = strlen(p);
    
    if (lenT < lenP) {
        printf("A string p nao pode ser maior do que a string T.\n");
        return 1;
    }
    
    int i, j, found;
    
    for (i = 0; i <= lenT - lenP; i++) {
        found = 1;
        
        for (j = 0; j < lenP; j++) {
            if (T[i + j] != p[j]) {
                found = 0;
                break;
            }
        }
        
        if (found) {
            printf("%d ", i);
        }
    }
    
    printf("\n");


    return EXIT_SUCCESS;
}
