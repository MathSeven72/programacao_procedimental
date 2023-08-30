/*
 * Arquivo: questao9.c
 * Compilação: gcc -std=c99 questao9.c -o questao9
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

/*Foi criado uma função afim de colocar o expoente em notação*/
char *superscriptinteger(char *buffer, int n){
    /*aqui temos os expoentes em uma lista que somente funcionará em UTF-8*/
                            /*    0         1         2         3         4    */
    char superscript[10][4] = {"\u2070", "\u00B9", "\u00B2", "\u00B3", "\u2074",
                               "\u2075", "\u2076", "\u2077", "\u2078", "\u2079"};
                            /*    5         6         7         8         9    */
    int digit;
    static bool finished = true;
    
    if (n == 0 && finished){
        sprintf(buffer, "%.3s", superscript[0]);
        return buffer;
    }
    
    if (finished) {
        buffer[0] = '\0';
        finished = false;
    }
    /*aqui ele verifica se o expoente será negativo se for o caso*/
    if (n < 0){
        strcat(buffer, "\u207B"); // sinal negativo -
        n = -n;
    }
    
    if (n > 0){
        digit = n % 10;
        superscriptinteger(buffer, n/10);
        strcat(buffer, superscript[digit]);
    }
    
    if (n == 0){
        finished = true;
    }
    
    return buffer;
}
int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int n;
    char expoente[22];
    // Solicita ao usuário que insira o valor de n
    do{
        printf("Digite um inteiro positivo n: ");
        
        scanf("%d", &n);
        // Verifica se n é um número positivo
        
        if (n < 0) {
            printf("Por favor, insira um número positivo.\n");
        }
    } /* se caso o numero não for maior que 0
    entra em um loop ate que a condição seja satisfeita*/
    while (n <= 0);

    printf("Potências de 2 de 0 a %d:\n", n);

    // Calcula e imprime as potências de 2
    for (int i = 0; i <= n; i++) {
        /*No comentario abaixo não é necessario a biblioteca math.h e não aparece
        o expoente em notação, e também não será necessaria a mudança para UTF-8*/
        
        /*unsigned long long int potencia = 1ULL << i; // Calcula 2 elevado à potência i
        printf("2^%d = %llu reduzido: %e\n", i, potencia, (double)potencia);
        */
        
        printf("%d%s = %d => Notação Científica: %e\n", 2, superscriptinteger(expoente, i), (int)pow(2, i), (double)(int)pow(2, i));
    }

    return EXIT_SUCCESS;
}