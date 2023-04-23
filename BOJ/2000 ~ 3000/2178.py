# 2178 - 미로탐색 (BFS)
# https://www.acmicpc.net/problem/2178

from collections import deque

# 2 <= N, M <= 100
N, M = map(int, input().split())

maze = []
# 다음 N개의 줄에 M개의 정수가 미로로 주어진다.
for i in range(N):
    maze.append(list(map(int, input())))

# BFS
queue = deque([(0, 0, 1)])
next_path = [(-1, 0), (1, 0), (0, -1), (0, 1)]
visited = [[False] * M for _ in range(N)]
visited[0][0] = True

while queue:
    x, y, count = queue.popleft()
    
    if x == N - 1 and y == M - 1:
        print(count)
        break

    for path in next_path:
        nx = x + path[0]
        ny = y + path[1]
        
        if nx >= 0 and ny >= 0 and nx < N and ny < M:
            if maze[nx][ny] == 1 and not visited[nx][ny]:
                visited[nx][ny] = True
                queue.append((nx, ny, count + 1))
