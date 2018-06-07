#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, index, len = 0, count = 1;
    vector<int> permutation;
    cin >> n;
    
    index = n;
    
    while(n--) {
        int temp;
        cin >> temp;
        permutation.push_back(temp);
    }
    
    if(index == 1) {
        cout << 1;
        return 0;
    }
    
    for(int i=1; i<index; ++i) {
        if(permutation[i-1] <= permutation[i]) 
            count++;
        else
            count = 1;
        if(len < count) 
            len = count;
    }
    
    reverse(permutation.begin(), permutation.end());
    
    count = 1;
    
    for(int i=1; i<index; ++i) {
            if(permutation[i-1] <= permutation[i]) 
                count++;
            else
                count = 1;
                
            if(len < count)
                    len = count;
    }
        
    cout << len << '\n';
	return 0;
}