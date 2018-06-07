#include <iostream>
using namespace std;

int main() {
	int one_count = 0;
	int zero_count = 0;
	int testcase, num;
	cin >> testcase;
	while(testcase--){
		cin >> num;
		if(num) ++one_count;
		else ++zero_count;
	}
	
	if(one_count > zero_count) cout << "Junhee is cute!" << endl;
	else cout << "Junhee is not cute!" << endl;
	return 0;
}