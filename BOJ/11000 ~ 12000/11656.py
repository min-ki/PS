s = input()

suffix = []

for index in range(len(s)):
	suffix.append(s[index:])

suffix.sort()

for index, item in enumerate(suffix):
	print(item)