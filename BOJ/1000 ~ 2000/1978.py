N = int(input())
number = list([int(x) for x in input().split()])
J = 2
count = 0

''' N이 제수와 같아질때까지 나누어지는 수가 없다면 
	N은 1과 자기자신만을 약수로 가지므로 
	소수이다. 
'''
def is_sosu(n):
	J = 2 # 제수 
	if n == 1: # n이 1이면 소수가 아니므로
		return False 
	if n >= 2: # n이 2보다 크다면	
		while J <= n:
			if n % J == 0 and J < n: # n이 제수와 나누어 떨어지고 제수가 n보다 작다면 
				return False 
			elif n % J == 0 and J == n: # n이 제수와 나누어 떨어지고 제수가 n과 같다면 
				return True
			else:
				J = J + 1
		return False

for index, item in enumerate(number):
	if is_sosu(item):
		count = count + 1
	else:
		pass

print(count)