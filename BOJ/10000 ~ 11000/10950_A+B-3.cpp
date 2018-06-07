#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int testcase;
    
    cin >> testcase;
    
    while(testcase--)
    {
        int a,b;
        cin >> a >> b;
        cout << a + b << '\n';
    }
    
    return 0;
}
