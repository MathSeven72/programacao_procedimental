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


            if first_dose_delayed > vaccines_available:
                first_dose_delayed -= vaccines_available
                second_dose_delayed += vaccines_available

            elif first_dose_delayed < vaccines_available:
                second_dose_delayed += first_dose_delayed
                vaccines_available -= first_dose_delayed
                first_dose_delayed = 0
                first_dose_month -= 1

                if first_dose_month == 1 and first_dose > 0:
                    second_dose += vaccines_available
                    first_dose = 0
                    first_dose_month = 0

                else:
                    first_dose += vaccines_available

        # Distribute second doses to those in time
        elif first_dose_month == 1:
            if first_dose > vaccines_available:
                first_dose_month += 1
                first_dose_delayed += abs(first_dose - vaccines_available)
                first_dose -= abs(first_dose - vaccines_available)
                second_dose += vaccines_available
                first_dose -= vaccines_available

            else:
                second_dose += first_dose
                vaccines_available -= first_dose
                first_dose = vaccines_available

        # Distribute first doses
        elif first_dose_month == 0:

            first_dose += vaccines_available
            first_dose_month += 1


    print("Pessoas completamente imunizadas:",
          second_dose + second_dose_delayed)
    if first_dose == 0:
        print("Pessoas imunizadas apenas com uma dose:",
              first_dose_delayed)
    else:
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
