# https://www.acmicpc.net/problem/2588

first = int(input())
second = input()
answer = []

for i, x in enumerate(second[::-1]):
    answer.append(first * int(x))

multiple_result = sum([x * (10 ** i) for i, x in enumerate(answer)])

for mid_result in answer:
    print(mid_result)

print(multiple_result)
