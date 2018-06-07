x,y,w,h = input().split()
x,y,w,h = map(int,[x,y,w,h])

print(min(x,y,w-x,h-y))
