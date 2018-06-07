#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int n;
    int position[10001];
    unsigned long long sum = 0;
    cin >> n;
    
    for(int i=1; i<=n; ++i) 
        cin >> position[i];
    
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=n; ++j) {
            sum += abs(position[i] - position[j]);
        }
    }
    cout << sum << '\n';
	return 0;
}
