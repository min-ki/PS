testcase = int(input())

while(testcase):
    r,e,c = input().split()    
    
    if(int(r) < int(e) - int(c)):
        print("advertise")
    
    if(int(r) == int(e) - int(c)):
        print("does not matter")
    
    if(int(r) > int(e) - int(c)):
        print("do not advertise")
        
    testcase = testcase - 1
    