# 12311EEL015

def vaccine_distribution(months, vaccines):
    first_dose = 0
    second_dose = 0
    first_dose_delayed = 0
    second_dose_delayed = 0
    first_dose_month = 0

    for i in range(months):
        vaccines_available = vaccines[i]
        print("*"*12)
        print(f"MES {i+1}")
        # Distribute second doses to those with a delay
        if first_dose_month > 1:
            print("segunda dose atrazada")
            # vaccinated = min(first_dose_delayed, vaccines_available)

            if first_dose_delayed > vaccines_available:
                first_dose_month += 1
                first_dose_delayed += abs(first_dose -
                                          vaccines_available)
                second_dose_delayed += vaccines_available
                print("D1A > ", first_dose_delayed)
                print("D2A > ", second_dose_delayed)

            elif vaccines_available > first_dose_delayed:
                second_dose_delayed += first_dose_delayed
                vaccines_available -= first_dose_delayed
                first_dose_delayed = 0
                first_dose_month -= 1
                print("D1 > ", first_dose)
                print("D2A > ", second_dose_delayed)
                print(f"tempo > {first_dose_month}")

                if first_dose_month == 1 and first_dose > 0:
                    second_dose += vaccines_available
                    print("D2 > ", second_dose)
                    print("D1 > ", first_dose)
                    first_dose = 0
                    first_dose_month = 0

                else:
                    first_dose += vaccines_available
                    first_dose_month += 1
                    print("D1 > ", first_dose)

                first_dose_month = 0

        # Distribute second doses to those in time
        elif first_dose_month == 1:
            print("segunda dose")
            # vaccinated = min(first_dose, vaccines_available)
            if first_dose > vaccines_available:
                first_dose_month += 1
                first_dose_delayed += abs(first_dose - vaccines_available)
                first_dose -= abs(first_dose - vaccines_available)
                second_dose += vaccines_available
                first_dose -= vaccines_available
                print("D1A > ", first_dose_delayed)
                print("D2 > ", second_dose)

            else:
                second_dose += (vaccines_available + first_dose)
                print("D2 > ", second_dose)
                first_dose = 0
                first_dose_month = 0

        # Distribute first doses
        elif first_dose_month == 0:
            print("primeira dose")
            first_dose += vaccines_available
            first_dose_month += 1
            print("D1 > ", first_dose)

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
    print("#"*10)

    # Calculate and print vaccine distribution
    vaccine_distribution(N, vaccines)


if __name__ == "__main__":
    main()
