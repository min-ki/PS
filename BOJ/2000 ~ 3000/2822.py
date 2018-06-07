testcase = 8
score_list = []
problem_list = []

while(testcase):
	score = int(input())
	score_list.append(score)
	testcase -= 1

testcase = 5
sum = 0
index_item = 0
score_copy = score_list[:]

while(testcase):
	index_item = max(score_list)
	sum += index_item
	problem_list.append(score_copy.index(index_item))
	score_list.remove(index_item)
	testcase -= 1
	
print(sum)

problem_list = sorted(problem_list)

for index, item in enumerate(problem_list): 
    print(item+1, end=" ")
    