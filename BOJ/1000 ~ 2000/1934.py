# 최소공배수
# https://www.acmicpc.net/problem/1934

import math

def lcm(a, b):
    return a * b // math.gcd(a, b)

n = int(input())

for i in range(n):
    a, b = list(map(int, input().split()))
    print(lcm(a, b))
