#include <iostream>
using namespace std;

int board[301][301];

int main() {
	int n, m, k;
	int _x, _y, x, y;
	int sum = 0;
	
	cin >> n >> m;
	
	for(int i=1; i<= n; ++i){
		for(int j=1; j<= m; ++j) {
			cin >> board[i][j];
		}
	}
	
	cin >> k;
	
	while(k--) {
		
		cin >> _x >> _y >> x >> y;
		
		for(int i=_x; i<=x; ++i) {
			for(int j=_y; j<=y; ++j) {
				sum += board[i][j];
			}
		}
		cout << sum << "\n";
		sum = 0;
	}
	return 0;
}