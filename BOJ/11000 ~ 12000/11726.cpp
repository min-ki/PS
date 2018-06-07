#include <iostream>
#include <cstring>
using namespace std;

long long dp[1001];

long long f(int n) {
    if(n < 0) return 0;
    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];
    
    dp[n] = (f(n-1) + f(n-2)) % 10007;
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << f(n) << '\n';
    return 0;
}