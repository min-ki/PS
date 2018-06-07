count = 1
new_num = 0

def add_cycle(n):
	if(n<10):
		new_num = (n*10) + n
	elif(n>=10):
		new_num = ((n%10)*10) + ((n/10) + (n%10))%10
	return int(new_num)
	
testcase = int(input())

new_num = add_cycle(testcase)

while(new_num != testcase):
	new_num = add_cycle(new_num)
	count = count + 1
	
print(count)