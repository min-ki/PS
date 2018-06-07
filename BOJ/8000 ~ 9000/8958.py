T = int(input())
o_x = []
point_count = 1
point = 0

for x in range(T):
    o_x.append(input())

for i in range(len(o_x)):
    temp_str = o_x[i]
    for j  in range(len(temp_str)):
        if temp_str[j] == 'O':
            point += point_count
            point_count += 1
        elif temp_str[j] == 'X':
            point += 0
            point_count = 1
    print(point)
    point = 0
    point_count = 1