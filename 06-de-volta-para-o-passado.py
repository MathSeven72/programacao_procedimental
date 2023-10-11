# 12311EEL015

def anwer
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
