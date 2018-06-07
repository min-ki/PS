#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int> &u, const pair<int, int> &r) {
	if(u.first < r.first)
		return true;
	if(u.first == r.first) {
		if(u.second < r.second) 
			return true;
	}
	
	return false;
}

int main() {
	int n;
	vector<pair<int, int>> ans;
	
	cin >> n;
	int x, y;
	
	while(n--) {
		cin >> x >> y;
		ans.push_back(make_pair(x,y));
	}
	
	sort(ans.begin(), ans.end(), compare);
	
	for(int i=0; i<ans.size(); ++i) 
		cout << ans[i].first << " " << ans[i].second << '\n';
	
	return 0;
}