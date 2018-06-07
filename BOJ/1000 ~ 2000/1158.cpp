#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	list<int> people;
	vector<int> ans;
	
	int n,m;
	cin >> n >> m;
	for(int i=1; i<=n; ++i) {
		people.push_back(i);
	}
	auto it = people.begin();
	while(n--) {
		if(it == people.end()) it = people.begin();
		for(int i=0; i<m-1; ++i) {
			++it;
			if(it == people.end()) it = people.begin();
		}
		ans.push_back(*it);
		it = people.erase(it);
	}
	cout << "<";
	for(auto it=ans.begin(); it != ans.end(); ++it) {
		if(it != ans.end()-1) cout << *it << ", ";
		else cout << *it;
	}
	cout << ">";
	return 0;
}