#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int word_count = 0;
	
	getline(cin, str);
	
	if(str[0] != ' ') 
		word_count = 1;
	
	for(int i=0; i<str.length(); ++i) 
		if(str[i] == ' ') 
			word_count++;
	
	if(str[str.length() - 1] == ' ')
		word_count--;
		
	cout << word_count;
	
	return 0;
}