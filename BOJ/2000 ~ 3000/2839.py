def delivery_sugar(n):
	delivery_num = []
	x_range = n/5
	y_range = n/3
	
	for x in range(int(x_range)+1):
		if 5*x > n:
			pass
		else:
			for y in range(int(y_range)+1):
				if 3*y > n:
					pass
				else:
					if((5*x)+(3*y) == n):
						delivery_num.append(x+y)
	if delivery_num:
		return min(delivery_num)
	else:
		return -1
		
testcase = int(input())
result = delivery_sugar(testcase)

print(result)