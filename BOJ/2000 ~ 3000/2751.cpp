#include <iostream>
#include <queue>
using namespace std;

int main() {
	priority_queue<int, vector<int>, greater<int>> q; // 힙 자료구조 오름차순 정렬
// 	priority_queue<int> q; 이렇게 쓰면은 내림차순
	int t, num;
	cin >> t;
	while(t--) {
		cin >> num;
		q.push(num);
	}
	

   while(!q.empty()) {
        cout << q.top() << ' '; // 5 4 3 2 1
        q.pop();
    }
    cout << '\n';
	return 0;
}