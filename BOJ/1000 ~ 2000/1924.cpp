#include <iostream>
#include <string>
using namespace std;

int main() {
	int month, day, sum_of_month = 0;
	int s_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string week[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

	cin >> month >> day;
	
	if(month != 1) {
		for(int i = 0; i< month; i++) {
			sum_of_month += s_month[i];
		}
	}
	sum_of_month += day;
	
	cout << week[sum_of_month % 7];
}
