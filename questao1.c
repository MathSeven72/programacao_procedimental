/*
 * Arquivo: questão1.c
 * Compilação: gcc -std=c99 questão1.c -o questão1
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    char str1[81], str2[81];
    
    printf("Digite a primeira string (até 80 caracteres): ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Digite a segunda string (até 80 caracteres): ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remova o caractere de nova linha no final das strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    int result = strcmp(str1, str2);
    
    if (result == 0) {
        printf("0\n");
    } else if (result < 0) {
        printf("-1\n");
    } else {
        printf("1\n");
    }

    
    return EXIT_SUCCESS;
}
