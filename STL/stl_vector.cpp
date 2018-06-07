#include <iostream>
#include <vector> // std::vector
using namespace std;

int main() {
    
    vector<int> v1; // int형 벡터 v1 선언
    
    // push_back을 이용한 데이터 삽입
    v1.push_back(10);
    v1.push_back(20); 
    
    // vector의 데이터 사이즈 출력
    cout << v1.size() << endl;
    
    // index를 통한 벡터의 데이터 접근
    for(int i=0; i<v1.size(); ++i) 
        cout << v1[i] << " ";
    
    cout << "\n";
    
    // iterator를 이용한 데이터 접근
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); ++it) 
        cout << *it << " ";
    
    cout << "\n";
    
    // reverse_iterator를 통한 역방향으로 데이터 접근
    for(vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); ++it) 
        cout << *it << " ";
    
    cout << "\n";
    
    // auto 키워드를 이용한 간편한 for문 출력
    for(auto it = v1.begin(); it != v1.end(); ++it)
        cout << *it << " ";
        
    cout << "\n";
    
    // 벡터안에 데이터의 유무 체크
    if(v1.empty()) cout << "empty!" << endl;
    else cout << "not empty" << endl;
    
    // 벡터의 맨 앞의 데이터를 출력
    cout << v1.front() << endl;
    // 벡터의 맨 뒤의 데이터를 출력
    cout << v1.back() << endl;
    
    // vector에있는 데이터를 전부 제거 방법 1
    for(int i=0; i<v1.size(); ++i)
        v1.pop_back(); // 마지막 원소를 제거 
    
    // vector에 있는 데이터 전부 제거 방법 2
    v1.clear();
    
    // 현재 벡터가 담을 수 있는 공간수용력을 출력
    cout << v1.capacity() << endl;
    
    // 벡터의 최대 원소의 개수를 반환 
    // 반환 타입은 unsigned int 타입
    cout << v1.max_size() << endl;
    
    return 0;
}