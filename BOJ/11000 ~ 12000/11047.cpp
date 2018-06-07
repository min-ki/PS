#include <cstdio>
using namespace std;

int coin[11];

int main() {
    int n, k, count = 0;
    scanf("%d %d", &n ,&k);
    
    for(int i=0; i<n; ++i) 
       scanf("%d", coin+i);
    
    for(int i=n-1; i>=0; i--) {
        while(coin[i] <= k) {
            k = k - coin[i];
            count++;
        }
    }
	
    printf("%d", count);
	
	return 0;
}
