s = input()
cnt = 0
vowel = ['a','e','i','o','u']

for x in s:
	if(x in vowel):
		cnt += 1
		
print(cnt)