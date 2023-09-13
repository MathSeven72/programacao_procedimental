def distribuir_vacinas(meses, vacinas_por_mes):

    primeira_dose = 0
    segunda_dose = 0
    segunda_dose_em_atraso = 0
    pessoas_esperando_segunda_dose = 0

    for i in range(meses):
        disponivel = vacinas_por_mes[i]

        # Verifica se existem pessoas esperando a segunda dose
        if pessoas_esperando_segunda_dose > 0 and i == 0:
            doses_aplicadas = min(disponivel, pessoas_esperando_segunda_dose)
            segunda_dose += doses_aplicadas
            pessoas_esperando_segunda_dose -= doses_aplicadas
            disponivel -= doses_aplicadas

        # Verifica se existem pessoas com segunda dose em atraso
        elif segunda_dose_em_atraso > 0 or i == 1:
            doses_aplicadas = min(disponivel, segunda_dose_em_atraso)
            segunda_dose += doses_aplicadas
            segunda_dose_em_atraso -= doses_aplicadas
            disponivel -= doses_aplicadas

        # Verifica se existem pessoas elegíveis para a segunda dose
        elif primeira_dose > 0:
            doses_aplicadas = min(disponivel, primeira_dose)
            segunda_dose += doses_aplicadas
            primeira_dose -= doses_aplicadas
            disponivel -= doses_aplicadas

        # As vacinas restantes são aplicadas como primeira dose
        primeira_dose += disponivel

        # Verifica se existem pessoas com segunda dose em atraso
        if i >= 1:
            segunda_dose_em_atraso += primeira_dose

    # Pessoas completamente imunizadas
    completamente_imunizadas = segunda_dose

    # Pessoas imunizadas apenas com uma dose
    imunizadas_apenas_com_primeira_dose = primeira_dose

    # Pessoas que tomaram a segunda dose com atraso
    tomaram_segunda_dose_com_atraso = segunda_dose_em_atraso

    # Pessoas esperando a segunda dose com atraso
    esperando_segunda_dose_com_atraso = primeira_dose

    return (
        completamente_imunizadas,
        imunizadas_apenas_com_primeira_dose,
        tomaram_segunda_dose_com_atraso,
        esperando_segunda_dose_com_atraso,
    )

# Leitura de entrada
meses = int(input())
vacinas_por_mes = [int(input()) for _ in range(meses)]

(
    completamente_imunizadas,
    imunizadas_apenas_com_primeira_dose,
    tomaram_segunda_dose_com_atraso,
    esperando_segunda_dose_com_atraso,
) = distribuir_vacinas(meses, vacinas_por_mes)

# Saída
print(f'Pessoas completamente imunizadas: {completamente_imunizadas}')
print(f'Pessoas imunizadas apenas com uma dose: {imunizadas_apenas_com_primeira_dose}')
print(f'Pessoas que tomaram a segunda dose com atraso: {tomaram_segunda_dose_com_atraso}')
print(f'Pessoas esperando a segunda dose com atraso: {esperando_segunda_dose_com_atraso}')
