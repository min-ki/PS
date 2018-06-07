#include <iostream>
#include <cstring>
using namespace std;

// Memoization을 위한 배열 
long long memo[1001][1001];

// f(nCk) = f(n-1Ck-1) + f(n-1Ck);
long long int bino(long long n, long long k) {
    long long sum = 0;
    
    if(k==0 || n == k) return 1;
    if(memo[n][k] != -1) return memo[n][k];
    
    sum = (bino(n-1, k-1)  + bino(n-1,k))% 10007;
    memo[n][k] = sum;
    
    return memo[n][k];
}

int main() {
    long long n, k;
    cin >> n >> k;
    memset(memo, -1, sizeof(memo));
    cout << bino(n, k) << '\n';
	return 0;
}
