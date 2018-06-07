#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool Matched(const string& ps) {
	
	const string opening("(");
	const string closing(")");
	
	stack<char> ans;
	for(int i=0; i< ps.size(); ++i) {
		if(opening.find(ps[i]) != -1) ans.push(ps[i]);
		else {
			if(ans.empty()) return false;
			if(opening.find(ans.top()) != closing.find(ps[i])) return false;
			ans.pop();
		}
	}	
	return ans.empty();
}

int main() {
	int testcase;
	string str;
	
	cin >> testcase;
	
	while(testcase--) {
		
		cin >> str;
		
		if(Matched(str)) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	
	return 0;
}