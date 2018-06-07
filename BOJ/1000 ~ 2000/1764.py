'''
 this docstring
'''

n,m = map(int, input().split(" "))

no_listen = []
no_see = []

while n:
    no_see.append(input())
    n -= 1

while m:
    no_listen.append(input())
    m -= 1
	
print(len(set(no_see) & set(no_listen)))

result = set(no_see) & set(no_listen)
result = sorted(result)

for x in result:
    print(x)
