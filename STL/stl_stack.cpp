#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    stack<int> s1; // int형 스택 생성
    stack<char> s2; // char형 스택 생성
    
    // 스택의 데이터 유무 체크 
    if(s1.empty()) 
        cout << "s1 is empty" << '\n';
        
    if(s2.empty())
        cout << "s2 is empty" << '\n';
        
    
    // 스택의 삽입
    s1.push(10); 
    s2.push('A');

    if(s1.empty()) 
        cout << "s1 is empty" << '\n';
    else
        cout << "s1에는 데이터가 존재" << '\n';
        
    if(s2.empty())
        cout << "s2 is empty" << '\n';
    else
        cout << "s2에는 데이터가 존재" << '\n';
        
    // 스택의 size 확인
    cout << "s1.size: " << s1.size() << '\n';
    cout << "s2.size: " << s2.size() << '\n';
    
    // 스택의 top 확인
    cout << "s1.top: " << s1.top() << '\n';
    cout << "s2.top: " << s2.top() << '\n';
    
    // 스택의 pop 연산
    s1.pop();
    s2.pop();
    
        if(s1.empty()) 
        cout << "s1 is empty" << '\n';
    else
        cout << "s1에는 데이터가 존재" << '\n';
        
    if(s2.empty())
        cout << "s2 is empty" << '\n';
    else
        cout << "s2에는 데이터가 존재" << '\n';

    return 0;
}