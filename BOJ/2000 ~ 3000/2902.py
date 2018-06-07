str = input().split("-")
result = []
for item in str:
	result.append(item[0])
	
print("".join(result))