#include <iostream>
#include <cstring>
using namespace std;

long long dp[11];

long long f(int n) {
    
    if(n < 0) return 0;
    if(n == 0) return 1;
    if(dp[n] != -1)  return dp[n];
    
    // n번째의 조합은 n-1 + n-2 + n-3을 더한 값이다. -> 피보나치 수열을 이룬다
    dp[n] = f(n-1) + f(n-2) + f(n-3); // 점화식
    
    return dp[n];
}

int main() {
    int testcase;
    cin >> testcase;
    
    for(int i=1; i<=testcase; ++i) {
        int n;
        cin >> n;
        memset(dp, -1, sizeof(dp));
        cout << f(n) << '\n';
    }
	return 0;
}
