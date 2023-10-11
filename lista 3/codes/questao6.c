/*
 * Arquivo: questao6.c
 * Compilação: gcc -std=c99 questao6.c -o questao6
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int m, n;

    // Leitura das dimensões da matriz
    printf("Digite o número de linhas (m): ");
    scanf("%d", &m);
    printf("Digite o número de colunas (n): ");
    scanf("%d", &n);

    // Verificação das dimensões da matriz
    if (m <= 0 || n <= 0 || m > 100 || n > 100) {
        printf("Erro: As dimensões da matriz devem estar entre 1 e 100.\n");
        return 1; // Encerra o programa com erro
    }

    // Leitura da matriz
    int matriz[m][n];
    printf("Digite os elementos da matriz %dx%d:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicialização das variáveis para encontrar o elemento com maior e menor frequência
    int elementoMenorFreq, elementoMaiorFreq;
    int menorFrequencia = m * n;
    int maiorFrequencia = 0;

    // Contagem das frequências dos elementos
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int elementoAtual = matriz[i][j];
            int frequenciaAtual = 1;

            // Verifica a frequência do elemento atual em toda a matriz
            for (int x = 0; x < m; x++) {
                for (int y = 0; y < n; y++) {
                    if (x != i || y != j) {
                        if (matriz[x][y] == elementoAtual) {
                            frequenciaAtual++;
                        }
                    }
                }
            }

            // Verifica se a frequência atual é a menor ou a maior
            if (frequenciaAtual < menorFrequencia) {
                menorFrequencia = frequenciaAtual;
                elementoMenorFreq = elementoAtual;
            }
            if (frequenciaAtual > maiorFrequencia) {
                maiorFrequencia = frequenciaAtual;
                elementoMaiorFreq = elementoAtual;
            }
        }
    }

    // Imprime os elementos com menor e maior frequência
    printf("Elemento com menor frequência: %d (ocorreu %d vezes)\n", elementoMenorFreq, menorFrequencia);
    printf("Elemento com maior frequência: %d (ocorreu %d vezes)\n", elementoMaiorFreq, maiorFrequencia);


    return EXIT_SUCCESS;
}
