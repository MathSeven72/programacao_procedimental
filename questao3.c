/*
 * Arquivo: questao3.c
 * Compilação: gcc -std=c99 questao3.c -o questao3
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif


    char str1[81], str2[81], str3[81];
    
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    
    printf("Digite a terceira string: ");
    fgets(str3, sizeof(str3), stdin);
    
    // Remova a quebra de linha ('\n') das strings lidas
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    str3[strcspn(str3, "\n")] = '\0';
    
    // Encontre a string de menor valor (ordem alfabética) usando strcmp
    char *min_str = str1;
    if (strcmp(str2, min_str) < 0) {
        min_str = str2;
    }
    if (strcmp(str3, min_str) < 0) {
        min_str = str3;
    }
    
    // Concatene as strings em ordem alfabética
    char result[243];  // Tamanho total máximo de 3 strings de 80 caracteres
    strcpy(result, min_str);
    
    if (min_str == str1) {
        strcat(result, str2);
        strcat(result, str3);
    } else if (min_str == str2) {
        strcat(result, str1);
        strcat(result, str3);
    } else {
        strcat(result, str1);
        strcat(result, str2);
    }
    
    printf("Strings concatenadas em ordem alfabética: %s\n", result);

    return EXIT_SUCCESS;
}
