x,y = input().split(" ")
result =str(int(x[::-1]) + int(y[::-1]))[::-1] # x의 reverse y의 reverse의 덧셈의 reverse
result = result.lstrip('0') # 문자열 왼쪽의 0을 다지워버리는 함수

