'''
    1012번 8진수 2진수
    진법 변환
'''
num = input() # input case
num = "0o" + num # python3 octal is 0o + _____
num = int(num, 8) # octal to decimal
print(str(bin(num))[2:]) # remove 0o
