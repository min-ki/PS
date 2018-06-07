#include <iostream>
#include <string>

using namespace std;

int main() {
	int a,b,c;
	int count_num[10] = {0,};
	string num;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	num = to_string(a * b * c);
	
	for (auto n : num) 
			count_num[int(n)- '0']++;
	
	for(int i=0; i<10; ++i) 
		cout << count_num[i] << endl;
		
	return 0;
}