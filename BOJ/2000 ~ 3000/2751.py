# 2751번 수 정렬하기 2

N = int(input())

number = []

for x in range(N):
    number.append(input())

# number 리스트의 값들이 입력으로 문자열 형태로 들어왔기 때문에
# map 함수를 통해 int형으로 형변환 해준다.

number = list(map(int, number)) 
number = number.sort()

for x in range(len(number)):
    print(x)