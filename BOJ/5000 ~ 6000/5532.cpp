#include <iostream>
using namespace std;

int main() {
    int L, A, B, C, D;
    int count_korea = 0;
    int count_math = 0;
    cin >> L >> A >> B >> C >> D;
    
    while(A>0) {
        A -= C;
        count_korea++;
    }
    
    while(B>0) {
        B -= D;
        count_math++;
    }
    
    if(count_korea > count_math) 
        L -= count_korea;
    else
        L -= count_math;
        
    cout << L << '\n';
    
    return 0;
}