#include <iostream>
using namespace std;

int main() {
    int eureka_num[46], t, x;
    bool eureka;
    
    cin >> t;
    
    for(int i=1; i<=45; ++i) 
        eureka_num[i] = (i * (i + 1)) / 2;
    
    while(t--) {
        cin >> x;
        for(int i=1; i<=45; ++i) {
            for(int j=1; j<=45; ++j) {
                for(int k=1; k<=45; ++k) {
                    if(eureka_num[i] + eureka_num[j] + eureka_num[k] == x ) {
                        eureka = true;
                        break;
                    }
                }
            }
        }
        
        if(eureka) cout << 1 << '\n';
        else cout << 0 << '\n';
        
        eureka = false;
    }    
    
	return 0;
}
