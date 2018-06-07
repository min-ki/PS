input_list = [] # list의 선언

n = 9 # testcase

while(n):
	input_list.append(int(input()))
	n = n - 1
	
max_value = max(input_list) # 파이썬의 내장함수 max를 사용해 list의 최대값을 반환
max_index = input_list.index(max_value) # index 함수를 사용해 해당 값의 index을 반환 

print(max_value)
print(max_index + 1)