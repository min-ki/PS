#include <iostream>
#include <queue>
using namespace std;

int main() {
	priority_queue<int> q; // 최대 힙
	int testcase;
	unsigned int x;
	
	cin >> testcase;
	while(testcase--) {
		cin >> x;
		if(x > 0) {
			q.push(x);
		}
		else if(x == 0) {
			if(!q.empty()) {
				cout << q.top() << '\n';
				q.pop();
			} 
			else {
				cout << 0 << '\n';
			}
		}
	}
	return 0;
}