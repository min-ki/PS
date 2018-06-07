n = int(input())

words = []
reverse_words = []

while(n):
    temp = input()
    words.append(temp)
    reverse_words.append(temp[::-1])
    
    n = n - 1
    
for index, item in enumerate(words):
    if item in reverse_words:
        print(len(item))
        print(item[int(len(item) / 2)])
        break