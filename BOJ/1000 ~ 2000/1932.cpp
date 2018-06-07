#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int n, dp[501][501], arr[501][501];
int triangle(int x, int y) {
	if( y>=n ) return 0;	
	if(dp[x][y] != -1) return dp[x][y];
	
	int result = max(arr[x][y] + triangle(x, y+1), arr[x][y] + triangle(x+1, y+1));
	dp[x][y] = result;
	return result;
}

int main() {
	cin >> n;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<=i; ++j) {
			cin >> arr[j][i];
		}
	}
	
	memset(dp, -1, sizeof(dp));
	cout << triangle(0, 0) << '\n';
	return 0;
}