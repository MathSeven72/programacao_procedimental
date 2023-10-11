# 12311EEL015

def answer(values, day, value):
    minimum = min(values)
    maximum = max(values)
    day_of_purchase = index(minimum)+1
    sale_day = index(maximum)+1
    total_purchase = 


def main():
    days = int(input())
    values = [int(input())for _ in range(days)]
    days_maximum_sale = int(input())
    value_for_buy = int(input())
    answer(values, days_maximum_sale, value_for_buy)

  
if __name__ == "__main__":
    main()
