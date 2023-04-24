# 인공지능 시계
# https://www.acmicpc.net/problem/2530

hour, minute, seconds = map(int, input().split())
cooking_time_seconds = int(input())

total_seconds = (hour * 60 * 60) + (minute * 60) + seconds
total_seconds += cooking_time_seconds

end_hour = (total_seconds // 3600) % 24
end_minute = (total_seconds % 3600) // 60
end_seconds = (total_seconds % 3600) % 60

print(end_hour, end_minute, end_seconds)
