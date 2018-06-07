#include <iostream>
using namespace std;

int main() {
    
    long long n, f;
    long long result = 987654321;
    
    cin >> n >> f;
    
    
    n -= n % 100;
    long long temp = n;
    
    for(int i = 0; i <= 99; ++i) {
        temp += i;
        
        if(temp % f == 0) 
            if(result > i) result = i;
        temp = n;
    }
    
    if(result < 10) 
        cout << 0 << result << '\n';
    else 
        cout << result << '\n';
        
	return 0;
}
