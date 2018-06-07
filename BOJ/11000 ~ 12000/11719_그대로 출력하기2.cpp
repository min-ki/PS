#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int count = 100;
	while(!cin.eof()){
		getline(cin, str);
		cout << str << endl;
	}
	return 0;
}
