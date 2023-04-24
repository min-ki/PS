# 오븐 시계
# https://www.acmicpc.net/problem/2525

current_hour, current_minute = map(int, input().split())
cooking_time_minute = int(input())

current_time_minute = current_hour * 60 + current_minute
current_time_minute += cooking_time_minute

print((current_time_minute // 60) % 24, current_time_minute % 60)
