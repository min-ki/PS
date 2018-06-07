#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int cnt = 0;
	cin >> s;
	
	for(char &x: s) {
		if(x == 'a' || x == 'i' || x == 'e' || x == 'o' || x == 'u')
			cnt += 1;
	}
	
	cout << cnt << '\n';
	return 0;
}