#include <iostream>

using namespace std;

int main() {
	int n,m;
	int result = 0;
	int piece = 0;

	cin >> n >> m;

	result = n * m;

	while (piece != n * m) {
		result /= 2;
		piece += 1;
	}
	cout << piece-1 << endl; 
    return 0;
}
