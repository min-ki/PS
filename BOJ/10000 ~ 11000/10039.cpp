#include <iostream>
#define MAX 5

using namespace std;

int main() {
	
	int student[MAX];
	int Student_Sum = 0; 

	for (int i = 0; i < MAX; i++) {
		cin >> student[i];
		if (student[i] < 40) student[i] = 40;
	}

	for (int i = 0; i < MAX; i++) 
		Student_Sum += student[i];
	
	cout << Student_Sum / MAX << endl;
	
	return 0;
}