#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main() {
    
    /*
        queue는 FIFO구조로 먼저 들어간 데이터가 제일 먼저 나온다.
    */
    
    queue<int> que1; // int형 queue의 선언
    queue<pair<int, int>> que2; // pair <int, int> 형으로 선언
    
    // queue의 삽입 push()
    que1.push(10); // que 삽입
    que2.push(make_pair(10, 20)); // pair의 삽입

    // queue의 사이즈
    cout << que1.size() << '\n';
    cout << que2.size() << '\n';
    
    int que1_front = que1.front();
    cout << que1_front << '\n'; // que1의 front 10 출력
    que1.pop(); // que1에서 데이터를 꺼냄
  
    pair<int,int> it = que2.front();
    cout << it.first << " " << it.second << '\n';
    que2.pop();
    
    if(que1.empty()) cout << "que1 empty" << '\n';  
    if(que2.empty()) cout << "que2 empty" << '\n';
    
    return 0;
}