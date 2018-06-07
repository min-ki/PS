testcase = int(input())

alphabet = []

allocator = {'A' : 1, 'B' : 2, 'C': 3, 'D' : 4, 'E' : 5, 'F' : 6, 'G' : 7,
   'H' : 8, 'I' : 9, 'J': 10, 'K': 11, 'L': 12, 'M': 13, 'N': 14, 
   'O' : 15, 'P' : 16, 'Q' : 17, 'R' : 18, 'S' : 19, 'T' : 20, 'U' : 21, 'V' : 22,
   'W' : 23, 'X' : 24, 'Y' : 25, 'Z' : 26}
while(testcase):
	alphabet.append(list(input().split(" ")))	
	testcase = testcase - 1
	
for index, sublist in enumerate(alphabet):
	if(index == 0):
		print("Distances: ", end= "")
	else:
		print("\nDistances: ", end="")
	for index in range(len(sublist[0])):
		if(allocator[sublist[1][index]] >= allocator[sublist[0][index]]):
			print(allocator[sublist[1][index]] - allocator[sublist[0][index]], end=" ")
		else:
			print((allocator[sublist[1][index]] + 26) - allocator[sublist[0][index]], end=" ")
	