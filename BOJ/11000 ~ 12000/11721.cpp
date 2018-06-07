// 열 개씩 끊어 출력하기

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str); 
	int i=0;
	for(i=0; i<str.size(); i++)
	{
		if(i%10 == 0 && i != 0)
				cout << endl;
		cout << str[i];
	}
	return 0;
}