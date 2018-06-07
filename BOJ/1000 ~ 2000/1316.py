testcase = int(input())
count = testcase
 
while(testcase):
    group_word = input()
    word_dic = set()
    previous_word = None
    flag = False
    for index, item in enumerate(group_word):
        item = item.lower()
        if not index: 
            word_dic.add(item)
            previous_word = item
        else:
            if item == previous_word and item in word_dic:
                pass
            elif item != previous_word and item in word_dic:
                flag = True
                break
            elif item != previous_word and item not in word_dic:
                word_dic.add(item)
                previous_word = item
    if flag:
        count -= 1
    testcase -= 1

print(count)