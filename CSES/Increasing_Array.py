# Time Complexity O(n)

size = int(input())

numbers = list(map(int, input().split()))

moves = 0

for i in range(1, size):
    if(numbers[i] < numbers[i - 1]):
        moves +=  numbers[i - 1] - numbers[i]
        numbers[i] = numbers[i - 1]
print(moves)