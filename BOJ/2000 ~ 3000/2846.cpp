#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int permutation[1001];
    int n, sum = 0, uphill = 0;
    bool flag;
    
    cin >> n;
    
    for(int i=1; i<=n; ++i) 
        cin >> permutation[i];
    
    for(int i=2; i<=n; ++i) {
        // 오르막길 
        if(permutation[i-1] < permutation[i]) {
            sum += abs(permutation[i] - permutation[i-1]);
            flag = true; 
            if(uphill < sum) uphill = sum;
        }
        // 평지
        else if(permutation[i-1] == permutation[i]) 
            sum = 0;
        // 내려막길 
        else if(permutation[i-1] > permutation[i]) 
            sum = 0;
    }
    
    // 오르막길이 존재한다면 
    if(flag) cout << uphill << '\n';
    else cout << 0 << '\n';
    
	return 0;
}