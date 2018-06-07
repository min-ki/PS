#include <iostream>
using namespace std;

int main() {
	int in, out;
	
	int max = 0, sum = 0;
	for(int i=1; i<=4; ++i) {
			cin >> out >> in;
			sum += in - out;
			if(sum > max) max = sum;
	}
	
	cout << max << endl;
	
	return 0;
}