/*
    10828번: 스택
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	stack<int> st;
	
	int t, num;
	string s;
	cin >> t;
	
	while(t--) {
		cin >> s;
		
		if(s.compare("push") == 0) {
			cin >> num;
			st.push(num);
		}
		
		if(s.compare("pop") == 0) {
			if(!st.empty()) {
				cout << st.top() << '\n';
				st.pop();
			} else {
				cout << -1 << '\n';
			}
		}
		
		if(s.compare("top") == 0) {
			if(!st.empty()) 
				cout << st.top() << '\n';
			else
				cout << -1 << '\n';
		}
		
		if(s.compare("size") == 0) {
			cout << st.size() << '\n';
		}
		
		if(s.compare("empty") == 0) {
			cout << st.empty() << '\n';
		}
	}
	
	return 0;
}