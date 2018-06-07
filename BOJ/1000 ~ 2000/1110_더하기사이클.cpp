#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string cycle;
	int sum = 0, first, second, cycle_counter = 0;
	
	cin >> str;

	if(str.length() == 1)
		str.insert(0, "0");	
			
	cycle = str;
	
	do
	{

		first = stoi(cycle) / 10;
		second = stoi(cycle) % 10;
	
		sum = first + second;
		
		cycle = to_string(second) + to_string(sum % 10); 
			
		cycle_counter++;
		
	}while(str != cycle);
	
	cout << cycle_counter;
	
	return 0;
}