def main():
    # Variável criada para inserir os meses
    meses = int(input())

    # Chamada da função
    D2, D1, D2A, D1A = distribuir_vacinas(meses)

    # Imprimindo a saída
    print(f'Pessoas completamente imunizadas: {D2}')
    print(f'Pessoas imunizadas apenas com uma dose: {D1}')
    print(f'Pessoas que tomaram a segunda dose com atraso: {D2A}')
    print(f'Pessoas esperando a segunda dose com atraso: {D1A}')

def distribuir_vacinas(meses):
    D2 = 0  # Pessoas completamente imunizadas
    D1 = 0  # Pessoas imunizadas apenas com uma dose (sem atraso)
    D2A = 0  # Pessoas que tomaram a segunda dose com atraso
    D1A = 0  # Pessoas esperando a segunda dose com atraso

    segunda_dose_atrasada = 0  # Iniciando a variável no zero

    i = 0  # Inicializando o contador de meses

    while i < meses:
        # Variável para computar as vacinas disponíveis
        vacinas_disponiveis = int(input())

        # Conferindo se há pessoas com a segunda dose atrasada
        if segunda_dose_atrasada > 0:
            # Calcula quantas pessoas receberão a segunda dose com atraso neste mês
            aplicar_segunda_dose = min(segunda_dose_atrasada, vacinas_disponiveis)

            # Atualiza as estatísticas para pessoas que tomaram a segunda dose com atraso
            D2A = D2A + aplicar_segunda_dose
            segunda_dose_atrasada =segunda_dose_atrasada - aplicar_segunda_dose
            vacinas_disponiveis = vacinas_disponiveis - aplicar_segunda_dose

        # Verifica se há pessoas com segunda dose em dia
        if i > 0:
            # Calcula quantas pessoas receberão a segunda dose em dia neste mês
            aplicar_segunda_dose = min(D1A, vacinas_disponiveis)

            # Atualiza as estatísticas para pessoas que tomaram a segunda dose em dia
            D2 =D2 + aplicar_segunda_dose
            D1A =D1A - aplicar_segunda_dose
            vacinas_disponiveis =vacinas_disponiveis - aplicar_segunda_dose

        # Aplica primeira dose para todas as vacinas restantes
        D1 =D1 + vacinas_disponiveis

        # Atualiza o contador de atraso na segunda dose para o próximo mês
        segunda_dose_atrasada = segunda_dose_atrasada + D1

        # Incrementa o contador de meses
        i = i + 1

    # Substituindo os valores atuais em suas respectivas variáveis
    return D2, D1, D2A, D1A


main()
