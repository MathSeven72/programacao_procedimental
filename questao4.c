/*
 * Arquivo: questao4.c
 * Compilação: gcc -std=c99 questao4.c -o questao4
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    char str[81];
    
    printf("Digite uma string (até 80 caracteres): ");
    fgets(str, sizeof(str), stdin);
    
    // Loop para percorrer cada caractere da string
    for (int i = 0; str[i] != '\0'; i++) {
        // Verifica se o caractere é uma letra maiúscula
        if (isupper(str[i])) {
            // Converte a letra maiúscula em minúscula
            str[i] = tolower(str[i]);
        }
    }
    
    printf("String convertida para minúsculas: %s\n", str);
    
    return EXIT_SUCCESS;
}
