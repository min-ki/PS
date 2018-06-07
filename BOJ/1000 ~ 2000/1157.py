str = input()

str_dic = {}

# 사전테이블 초기화
for index, item in enumerate(str):
	str_dic[item.lower()] = 0

# 단어의 개수 Counting
for index, item in enumerate(str):
	str_dic[item.lower()] += 1

max_item = max(str_dic.values())
index = 0

for key, value in str_dic.items():
	if max_item == value:
		index = key
		
del str_dic[index]

if max_item in str_dic.values():
	print("?")
else:
	print(index.upper())
	