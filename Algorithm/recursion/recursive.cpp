#include <iostream>

using namespace std;

// n까지의 합
int recursive(int n) {
    if(n<=1) return 1;
    else return n + recursive(n-1);
}

int main() {
    int n = 10;
    cout << recursive(n) << "\n";
    return 0;
}