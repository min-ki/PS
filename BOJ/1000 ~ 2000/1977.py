from math import sqrt
import re

M = int(input())
N = int(input())
result = []

for item in range(M, N+1):
	root = sqrt(item)
	match = re.search("[0-9]+\.0{1}$", str(root))
	
	if match:
		origin = root**2
		result.append(int(origin))
	
if result:
	print(sum(result))
	print(min(result))
else:
	print(-1)