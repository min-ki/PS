// 중복 빼고 정렬하기 

#include <iostream>
#include <set>

using namespace std;

int main() {
	int testcase;
	set<int> s; // 중복된 값을 저장하지않는 집합 선언
	cin >> testcase;
	for(int i=1; i<=testcase; ++i){
		int temp;
		cin >> temp;
		s.insert(temp);	
	}
	
	for(auto x: s) {
		cout << x << ' ';
	}
	cout << '\n'; // 성능의 향상을 위해 endl 대신에 개행문자를 사용한다. 
	 
	return 0;
}