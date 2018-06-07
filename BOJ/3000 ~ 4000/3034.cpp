#include <iostream>

using namespace std;

int main() {
    int n, w, h;
    cin >> n >> w >> h;
    
    int size = w * w + h * h ;
    
    while(n--) {
        int matches;
        cin >> matches;
        
        if(size >= matches * matches) {
            cout << "DA" << '\n';
        } else 
            cout << "NE" << '\n';
    }
    
    return 0;
}