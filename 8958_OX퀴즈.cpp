#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	int t, o_x_count = 0, sum = 0;
	
	cin >> t;
	cin.ignore(256, '\n'); // cin 다음 getline 사용할때 필요
	
	for(int i=0; i<t; ++i)
	{
		string o_x;

		getline(cin, o_x);
		
		for(int i=0; i<o_x.length(); ++i) 
		{
			if(o_x[i] == 'O') o_x_count++;
			else o_x_count = 0;
			
			sum += o_x_count;
		}
		
		cout << sum << '\n';
		sum = 0;
		o_x_count = 0;
	}

	return 0;
}