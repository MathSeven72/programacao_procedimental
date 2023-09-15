# 12311EEL015

def vaccine_distribution(months, vaccines):
    first_dose = 0
    second_dose = 0
    first_dose_delayed = 0
    second_dose_delayed = 0
    first_dose_month = 0

    for i in range(months):
        vaccines_available = vaccines[i]
        # Distribute second doses to those with a delay
        if first_dose_month > 1:
            print("segunda dose atrazada")
            # vaccinated = min(first_dose_delayed, vaccines_available)
            if (first_dose_delayed + first_dose) > vaccines_available:
                first_dose_month += 1
                first_dose_delayed = abs(first_dose -
                                          vaccines_available)
                second_dose_delayed = vaccines_available
            else:
                second_dose_delayed += first_dose_delayed
                vaccines_available = abs(vaccines_available -
                                         first_dose_delayed)
                first_dose_delayed = 0

                if first_dose > 0:
                    second_dose += (vaccines_available + first_dose)
                    first_dose = 0
                    first_dose_month = 0

                elif first_dose == 0:
                    first_dose += vaccines_available
                    first_dose_month += 1

                first_dose_month = 0

        # Distribute second doses to those in time
        elif first_dose_month == 1:
            # vaccinated = min(first_dose, vaccines_available)
            if first_dose > vaccines_available:
                first_dose_month += 1
                first_dose_delayed = abs(first_dose -
                                         vaccines_available)
                second_dose = vaccines_available

            else:
                second_dose += (vaccines_available + first_dose)
                first_dose = 0
                first_dose_month = 0

        # Distribute first doses
        elif first_dose_month == 0:
            first_dose += vaccines_available
            first_dose_month += 1



    print("Pessoas completamente imunizadas:",
          second_dose + second_dose_delayed)
    print("Pessoas imunizadas apenas com uma dose:",
          first_dose)
    print("Pessoas que tomaram a segunda dose com atraso:",
          second_dose_delayed)
    print("Pessoas esperando a segunda dose com atraso:",
          first_dose_delayed)


def main():

    # Input
    N = int(input())
    vaccines = []
    for _ in range(N):
        vaccines.append(int(input()))

    # Calculate and print vaccine distribution
    vaccine_distribution(N, vaccines)


if __name__ == "__main__":
    main()
