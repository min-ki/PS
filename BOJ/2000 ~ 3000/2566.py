# 최댓값
# https://www.acmicpc.net/problem/2566
board = []

for i in range(9):
    board.append(list(map(int, input().split())))

max_value = -1
max_position = (-1, -1)

for i in range(9):
    for j in range(9):
        if board[i][j] > max_value:
            max_value = board[i][j]
            max_position = (i, j)

print(max_value)
print(max_position[0] + 1, max_position[1] + 1)
