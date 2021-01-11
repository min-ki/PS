def solution(participant, completion):
    
    part_hash = {}
    comp_hash = {}
    
    
    for c in completion:
        if c in comp_hash:
            comp_hash[c] = comp_hash[c] + 1
        else:
            comp_hash[c] = 1
    
    for p in participant:
        if p in part_hash:
            part_hash[p] = part_hash[p] + 1
        else:
            part_hash[p] = 1
        
    for p in participant:
        # completion에 없으면 완주하지 못한 것
        if not p in comp_hash:
            answer = p
        
        # completion에 있지만 part_hash랑 completion 해시랑 비교해서 값이 다르면 완주하지 못한 동명이인이 있는 것
        elif p in comp_hash and comp_hash[p] != part_hash[p]:
            answer = p
        

    return answer
