/*
 * Arquivo: Questao2.c
 * Compilação: gcc -std=c99 Questao2.c -o Questao2
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int a,b;
    float f;g; /*aqui era para ser uma "," e não ";" para separar as variaveis*/
    char h = 65; /* segundo a tabela ASCII é um "A"*/
    a, b = 10, 2; /*aqui está correto informando que as variaveis irão receber os valores correspondentes*/
    f = 75; /*no caso essa variavel é um float devido a isso faltou os numeros apos a virgula mas isso não impede o programa de executar*/
    scanf("%f", g); /*aqui esta solicitando para o usuario um numero float para ser armazenado na variavel "g"*/

    return EXIT_SUCCESS;
}
