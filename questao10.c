/*
 * Arquivo: questao10.c
 * Compilação: gcc -std=c99 questao10.c -o questao10
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif


    char str[81];
    
    // Solicita ao usuário para inserir uma string de até 80 caracteres
    printf("Digite uma string (até 80 caracteres): ");
    fgets(str, sizeof(str), stdin);

    // Remove a quebra de linha (\n) no final da string, se existir
    str[strcspn(str, "\n")] = '\0';

    int tamanho = strlen(str);
    
    // Remove espaços em branco e converte todos os caracteres para minúsculas
    char novaString[81];
    int j = 0;
    for (int i = 0; i < tamanho; i++) {
        if (!isspace(str[i])) {
            novaString[j] = tolower(str[i]);
            j++;
        }
    }
    novaString[j] = '\0';

    // Verifica se a string é um palíndromo
    int isPalindromo = 1;
    int len = strlen(novaString);
    for (int i = 0; i < len / 2; i++) {
        if (novaString[i] != novaString[len - i - 1]) {
            isPalindromo = 0;
            break;
        }
    }

    // Exibe o resultado
    if (isPalindromo) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }


    return EXIT_SUCCESS;
}
