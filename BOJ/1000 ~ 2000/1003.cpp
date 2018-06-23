/*
    1003번: 피보나치 함수
    메모이제이션을 이용한 해결
*/

#include <iostream>
using namespace std;

int dp[41];

int fibonacci(int n) {
	
	if(dp[n] != 0) 
		return dp[n];
	
	if(n == 0) {
		dp[0] = 0;
		return 0;
	} else if( n == 1 ) {
		dp[1] = 1;
		return 1;
	} else {
		return dp[n] = fibonacci(n-1) + fibonacci(n-2);
	}
}

int main() {
	int t, n;
	cin >> t;
	
	while(t--) {
		cin >> n;
		fibonacci(n);
		if(n == 0) 
			cout << 1 << " " << 0 << '\n';
		else
			cout << dp[n-1] << " " << dp[n] << '\n';
	}
}