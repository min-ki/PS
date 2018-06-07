#include <iostream>
#include <string>
#include <bitset> // bitset 사용
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    bitset<100000>a(s1),b(s2); // 문자열로도 가능하기때문에
    cout << (a & b) << '\n'; // and 연산
    cout << (a | b) << '\n'; // or연산
    cout << (a ^ b) << '\n'; // xor연산
    cout << (~a) << '\n'; // not 연산
    cout << (~b) << '\n'; // not 연산
    return 0;
}