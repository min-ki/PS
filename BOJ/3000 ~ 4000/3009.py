# 네 번째 점
# https://www.acmicpc.net/problem/3009

coord = []
coord_x, coord_y = set(), set()

for _ in range(3):
    x, y = map(int, input().split())
    coord.append((x, y))
    coord_x.add(x)
    coord_y.add(y)

product_set = [(x, y) for x in coord_x for y in coord_y]

for item in product_set:
    if item not in coord:
        print(item[0], item[1])
