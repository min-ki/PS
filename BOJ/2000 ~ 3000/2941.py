testcase = input()
croatian_alphabet = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

for item in croatian_alphabet:
    count = testcase.count(item)
    i = 0
    while i < count:
        i += 1
        testcase = testcase.replace(item, '1')
        
print(len(testcase))
