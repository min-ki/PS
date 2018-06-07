cam = ['C', 'A', 'M', 'B','R', 'I', 'D', 'G', 'E']

email = input()

for word in email:
    if word in cam:
       email = email.replace(word, "")

print(email)
    