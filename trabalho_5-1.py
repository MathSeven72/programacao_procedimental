def main(): # função main
    mes = int(input())
    lista = []
    for i in range(mes): # recebendo a quantidade de vacinas por mês
        entrada = int(input())
        lista.append(entrada)
    funcao(mes, lista) # chamada da função

def funcao(mes, lista):
    D2 = 0 # pessoas completamente imunizadas
    D1 = 0 # Pessoas que estao com uma dose, independente de estar com a 2 dose atrasada
    D2A = 0 # segunda dose com atraso
    D1A = 0 # nao tomaram a segunda dose e estao atrasados

    # VARIÁVEIS CONTADORAS
    SD = 0 #segunda dose
    cont = 0 # vacinados com a segunda dose atrasada

    tamanho = len(lista) # tamanho da lista

    i = 0
    while (i<= len(lista)-1):  # laço de repetição

        aux = 1  # Para nao termos dois ou mais IF sendo executados em um mesmo icremento de I

        if (i == 0):  # caso para o primeiro mês
            D1 = lista[i]

        if (i > 0):

            if (lista[i] < D2A):  # Quando a quantidade vacina de um mês é menor que a quantidade de vacinas atrasada da segunda dose
                D2 = lista[i]
                D1 = D2A - lista[i]
                D2A = D2A - lista[i]
                cont = cont + D2  # RECEBRAM A SEGUNDA DOSE ATRASADOS
                aux = 0

            if (lista[i] > D2A and D2A != 0):  # Quando a quantidade vacina de um mês é maior que a quantidade de vacinas atrasada da segunda dose
                D2 = D2A
                cont = cont + D2 # RECEBRAM A SEGUNDA DOSE ATRASADOS
                D1 = lista[i] - D2A
                D2A = 0
                aux = 0

            if (lista[i] < D1 and aux != 0):  # Quando a quantidade de vacinas de um mês é menor que a primeira dose anterior
                D2 = lista[i]
                D2A = D1 - lista[i]
                D1 = D2A
                aux = 0

            if (lista[i] > D1 and aux != 0):  # Quando a quantidade de vacinas de um mês é menor que a primeira dose anterior
                D2 = D1
                D1 = lista[i] - D2

            if (lista[i] == D1):  # quanto temos a quantidade de vacinas iguais em todos os meses
                D2 = lista[i]
                D1 = 0
                if (i < tamanho-1):
                    i = i + 1 # para não pular fora da lista
                    D1 = lista[i]
        SD = SD + D2 # pessoas completamente imunizadas

        i = i + 1 # atualizando a variável I, para não gerar loop infinito

    # Possíveis saídas
    print("Pessoas completamente imunizadas: {}".format(SD))
    print("Pessoas imunizadas apenas com uma dose: {}".format(D1))
    print("Pessoas que tomaram a segunda dose com atraso: {}".format(cont))
    print("Pessoas esperando a segunda dose com atraso: {}".format(D2A))


main()  # chamada da função main
