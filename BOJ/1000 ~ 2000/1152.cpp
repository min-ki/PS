#include <iostream>
#include <string>
using namespace std;
int main() {
    int cnt = 0;
    string s;
    
    while( cin >> s ) { // 입력을 받는 동안 단어의 개수를 증가시켜주는 방법이다.
        cnt += 1;
    }
    
    cout << cnt << '\n';
    return 0;
}