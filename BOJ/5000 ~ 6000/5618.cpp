#include <iostream>
#include <algorithm>
using namespace std;

void solve_two(const int x, const int y) {
    int range = min(x, y);
    for(int i=1; i<=range; ++i) {
        if(x%i == 0 && y%i == 0) 
            cout << i << '\n';
    }
}

void solve_three(const int x, const int y, const int z) {
    int range = min(x, min(y, z));
    
    for(int i=1; i<=range; ++i) {
        if(x%i == 0 && y%i == 0 && z%i == 0)
            cout << i << '\n';
    }
}

int main() {
    int n;
    int num[3];
    
    cin >> n;
    
    if(n == 2) {
        cin >> num[0] >> num[1];    
        solve_two(num[0], num[1]);
    }
    
    if(n == 3) {
        cin >> num[0] >> num[1] >> num[2];
        solve_three(num[0], num[1], num[2]);
    }
    
    return 0;
    
}