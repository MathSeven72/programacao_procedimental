# 12311EEL015

def vaccine_distribution(months, vaccines):
    first_dose = 0
    second_dose = 0
    first_dose_delayed = 0
    second_dose_delayed = 0

    for i in range(months):
        vaccines_available = vaccines[i]

        # Distribute second doses to those with a delay
        if first_dose_delayed > 0:
            vaccinated = min(first_dose_delayed, vaccines_available)
            second_dose_delayed += vaccinated
            first_dose_delayed -= vaccinated
            vaccines_available -= vaccinated

        # Distribute first doses
        if vaccines_available > 0:
            first_dose += vaccines_available
            vaccines_available = 0

        # Distribute second doses to those in time
        if first_dose > 0:
            vaccinated = min(first_dose, vaccines_available)
            second_dose += vaccinated
            first_dose -= vaccinated
            vaccines_available -= vaccinated

        # People who are waiting for the second dose with a delay
        first_dose_delayed += first_dose

    print("Pessoas completamente imunizadas:", second_dose)
    print("Pessoas imunizadas apenas com uma dose:", first_dose)
    print("Pessoas que tomaram a segunda dose com atraso:", second_dose_delayed)
    print("Pessoas esperando a segunda dose com atraso:", first_dose_delayed)


def main():

    # Input
    N = int(input())
    vaccines = []
    for _ in range(N):
        vaccines.append(int(input()))

    # Calculate and print vaccine distribution
    vaccine_distribution(N, vaccines)



main()


'''Fully_immunized_people = D2
People_immunized_with_just_one_dose = D1
People_who_took_the_second_dose_late = D2a
People_waiting_for_the_second_dose_late = D1a'''

"""5 meses
    1 dose > 1 mes = 13
    13 people, vac = 13
    13 d1

    2 dose > 2 mes = 7
    13 + 6 people = 19, vac = 7
    12 d1, 7 d2, 0 d1a, 0 d2a

    1 dose > 3 mes = 41
    41 + 12 people = 53, vac = 41
    d1, 19 d2, d1a, d2a

    2 dose > 4 mes = 11
    
    
    1 dose > 5 mes = 8
    
    
    d1 = 0
    d2 = 18
    d1a = 16
    d2a = 14


    total
    """
