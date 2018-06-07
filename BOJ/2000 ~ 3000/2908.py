n = input().split()

num1 = int(n[0][::-1]) # 문자열 뒤집기 트릭
num2 = int(n[1][::-1]) # [::-1]

if(num1 > num2):
	print(num1)
else:
	print(num2)
	
