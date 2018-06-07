'''
    * title   : Digit Sums
    * Problem : 2145
    * Data    : 2017.03.16 
'''

while(True):
	s = input() # 입력 
	
	if(int(s) == 0): # 0이 들어온다면 종료
		break;
	else:
		sum = 0 
	
	    # 입력된 값이 single digit answer인지 검사한다.
		for x in s:
			sum += int(x)
	    
	    # signle digit answer가 아니라면 
	    # single digit answer가 될때까지 반복한다. 
		while(sum >= 10): 
			temp = 0
			for x in str(sum):
				temp += int(x)
			sum = temp
	print(sum)
		