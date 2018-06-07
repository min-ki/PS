#include <iostream>
#include <cstring>
using namespace std;

long long memo[91][2];

long long pinaryNum(int n, long long data) {
    long long count = 0;
    if(n == 1) return 1;
    if(memo[n][data] != -1) return memo[n][data];
    
    if(data == 1) count += pinaryNum(n-1, 0);
    else if(data == 0) {
        count += pinaryNum(n-1, 1);
        count += pinaryNum(n-1, 0);
    }
    
    memo[n][data] = count;
    
    return memo[n][data];
}
int main() {
    int n;
    cin >> n;
    memset(memo, -1, sizeof(memo));
    cout << pinaryNum(n, 1)<< '\n';
    
	return 0;
}
