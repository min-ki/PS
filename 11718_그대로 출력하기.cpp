/*
    string 참고자료 : http://makerj.tistory.com/127?category=406705
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	
	while(true){
		getline(cin, str);
		if(str.length() > 0) {
			cout << str << endl;
			str = "";
		}
		else
			break;
	}
	return 0;
}

