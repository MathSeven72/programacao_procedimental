/*
 * Arquivo: questao9.c
 * Compilação: gcc -std=c99 questao9.c -o questao9
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[81];
    
    // Solicita ao usuário para inserir uma string de até 80 caracteres
    printf("Digite uma string (até 80 caracteres): ");
    fgets(str, sizeof(str), stdin);

    // Remove a quebra de linha (\n) no final da string, se existir
    str[strcspn(str, "\n")] = '\0';

    int tamanho = strlen(str);
    
    // Inverte a string diretamente no vetor original
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }

    // Exibe a string invertida no vetor original
    printf("A string inversa é: %s\n", str);

    return 0;
}
