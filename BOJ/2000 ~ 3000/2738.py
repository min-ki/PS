# 행렬 덧셈
# https://www.acmicpc.net/problem/2738

# 행렬의 덧셈 각 배열의 위치끼리 더하면 된다.

N, M = map(int, input().split())

matrix1, matrix2 = [], []

for _ in range(N):
    matrix1.append(list(map(int, input().split())))

for _ in range(N):
    matrix2.append(list(map(int, input().split())))

# N * M만큼 순회하면서 더한다.
sum_of_matrix = [[0] * M for _ in range(N)]

for i in range(N):
    for j in range(M):
        sum_of_matrix[i][j] += matrix1[i][j] + matrix2[i][j]

for row in sum_of_matrix:
    for column in row:
        print(column, end=' ')
    print()
