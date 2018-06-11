number = [x for x in range(10001)]
self_number = [x for x in range(10001)]
def d(n):
	sum = 0
	for item in str(n):
		sum += int(item)

	sum += int(n)

	return sum

for index, num in enumerate(number):
	num = str(num)
	ans = d(num)

	if ans < 10001:
		self_number[ans] = 0

for item in self_number:
	if item != 0:
		print(item)
