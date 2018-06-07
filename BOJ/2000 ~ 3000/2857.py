fbi = []
n = 5 # 입력의 개수

while(n):
    fbi.append(input())    
    n = n - 1
    
flag = False # FBI요원이 있는지 검사하는 flag
for index, item in enumerate(fbi, 1): # enumerate의 두번째 인자는 시작 인덱스
    if "FBI" in item:
        flag = True
        print(index)
    
if flag is False:
    print("HE GOT AWAY!")
    