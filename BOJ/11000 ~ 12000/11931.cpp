#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	int testcase;
	
	cin >> testcase;
	
	while(testcase--) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	sort(v.begin(), v.end());
	
	for(auto it = v.rbegin(); it != v.rend(); ++it) {
		cout << *it << '\n';
	}
	
	return 0;
}