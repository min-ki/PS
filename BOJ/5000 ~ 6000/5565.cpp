#include <iostream>
using namespace std;
#define MAX 10

int main() {
	
	int Book[MAX];
	int total;
	int sum = 0;
	cin >> total;

	for (int i = 0; i < MAX - 1; i++) {
			cin >> Book[i];
			sum += Book[i];
	}
	cout << total - sum << endl;

	return 0;
}