#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> ans;

int main() {
	
	int t=10, temp;
	while(t--) {
		cin >> temp;
		ans.push_back(temp%42);
	}

	sort(ans.begin(), ans.end());
	auto it = unique(ans.begin(), ans.end());
	ans.resize(distance(ans.begin(), it));
	cout << ans.size() << '\n';
	
	return 0;
}