#include <iostream>
#include <vector>
using namespace std;

int eratos[1002];

int main() {
    int n, k, count = 0;
    vector<int> erase;
    cin >> n >> k;
    
    for(int i=2; i<=n; ++i) 
        eratos[i] = i;

    for(int i=2; i<=n; ++i) {
        if(eratos[i] == 0) 
            continue;
            
        erase.push_back(i);
        
        for(int j = i * 2; j <= n; j += i) {
            if(eratos[j]!=0){ 
                erase.push_back(j);
                eratos[j] = 0;
            }
        }
    }
    cout << erase[k-1] << '\n';
    
	return 0;
}