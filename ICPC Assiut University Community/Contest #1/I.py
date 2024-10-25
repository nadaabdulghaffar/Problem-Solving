def luckyNumber(number):
    letter1 = number % 10
    letter2 = number // 10
    if letter1 % letter2 == 0 or letter2 % letter1 == 0:
        print("YES")
    else:
        print("NO")

number = int(input())
luckyNumber(number)