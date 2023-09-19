/*
 * Arquivo: questao5.c
 * Compilação: gcc -std=c99 questao5.c -o questao5
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif


    char str1[100], str2[100];
    int count1[256] = {0}; // Array para contar os caracteres da primeira string
    int count2[256] = {0}; // Array para contar os caracteres da segunda string
    int len1, len2;
    
    printf("Digite a primeira string: ");
    gets(str1); // Leitura da primeira string
    
    printf("Digite a segunda string: ");
    gets(str2); // Leitura da segunda string
    
    // Calcula o comprimento das strings
    len1 = strlen(str1);
    len2 = strlen(str2);
    
    // Se as strings tiverem comprimentos diferentes, elas não podem ser anagramas
    if (len1 != len2) {
        printf("Nao sao anagramas.\n");
        return 0;
    }
    
    // Conta os caracteres da primeira string
    for (int i = 0; i < len1; i++) {
        count1[(int)str1[i]]++;
    }
    
    // Conta os caracteres da segunda string
    for (int i = 0; i < len2; i++) {
        count2[(int)str2[i]]++;
    }
    
    // Compara as contagens de caracteres
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("Nao sao anagramas.\n");
            return 0;
        }
    }
    
    printf("Sao anagramas.\n");


    return EXIT_SUCCESS;
}
