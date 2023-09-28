/*
 * Arquivo: questao9.c
 * Compilação: gcc -std=c99 questao9.c -o questao9
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif


    char original[81], inversa[81];
    
    // Solicita ao usuário para inserir uma string de até 80 caracteres
    printf("Digite uma string (até 80 caracteres): ");
    fgets(original, sizeof(original), stdin);

    // Remove a quebra de linha (\n) no final da string, se existir
    original[strcspn(original, "\n")] = '\0';

    int tamanho = strlen(original);
    
    // Inverte a string original e a armazena na string inversa
    for (int i = 0; i < tamanho; i++) {
        inversa[i] = original[tamanho - i - 1];
    }
    inversa[tamanho] = '\0';

    // Exibe a string inversa
    printf("A string inversa é: %s\n", inversa);


    return EXIT_SUCCESS;
}
