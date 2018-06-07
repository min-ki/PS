#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	int testcase = 9, max_index = 0;
	vector<int> input;
	
	while(testcase--) {
		int temp;
		cin >> temp;
		input.push_back(temp);
	}
	
	auto maximum = max_element(input.begin(), input.end());
	
	for(int i=0; i<9; ++i) {
		if(input[i] == *maximum) {
			max_index = i + 1;
		}
	}
	
	cout << *maximum << '\n';
	cout << max_index << '\n';
	
	return 0;
}