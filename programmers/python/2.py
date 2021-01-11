def solution(phone_book):
    answer = True
    
    phone_book.sort()

    hash = {}
    
    for num in phone_book:
        hash[num] = True
        
        # 길이만큼 순회하면서 해시에 접두사가 있는지 체크해서 있다면 False를 반환한다.
        for i in range(len(num)):
            if num[0:i] in hash:
                return False
            
    return answer
