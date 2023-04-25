# 수들의 합
# https://www.acmicpc.net/problem/1789

S = int(input())
# 19까지의 합 < 200이 주어진다. < 20까지의 합
sum_of_n = 0
n = 1

while True:
    sum_of_n += n
    if sum_of_n + n >= S:
        break
    n += 1

print(n)
