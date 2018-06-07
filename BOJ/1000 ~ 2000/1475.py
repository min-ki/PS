n = input()

number_set = [0,1,2,3,4,5,6,7,8,9]
count = 1
for item in n:
	item = int(item)
	if item in number_set:
		index = number_set.index(item)
		del number_set[index]
	else:
		if item == 6 and 9 in number_set:
			index = number_set.index(9)
			del number_set[index]
		elif item == 9 and 6 in number_set:
			index = number_set.index(6)
			del number_set[index]
		else:	
			count += 1
			for x in range(0,10):
				number_set.append(x)	
			index = number_set.index(item)
			del number_set[index]

print(count)