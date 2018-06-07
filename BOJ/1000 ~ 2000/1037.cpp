#include <iostream>
using namespace std;

int main(void) {
	int T;
	int Number[50];
	int Max, Min;

	cin >> T;

	for(int i = 0; i < T; i++)
		cin >> Number[i];

	Max = Number[T-1];
	Min = Number[0];

	for(int i=0; i < T ; i++) {
		    if(	Number[i] > Max )
				 Max = Number[i];
			 if (Number[i] < Min )
			     Min = Number[i];
	}

	cout << Max * Min << endl;

	return 0;

}