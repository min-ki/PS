# 팰린드롬인지 확인하기
# https://www.acmicpc.net/problem/10988

s = input()
print(1 if s == s[::-1] else 0)
