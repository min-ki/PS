# 최댓값
# https://www.acmicpc.net/problem/2562
numbers = []

n = 9
while n:
    numbers.append(int(input()))
    n -= 1

max_value = max(numbers)
max_index = numbers.index(max_value)

print(max_value)
print(max_index + 1)
