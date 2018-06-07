/*
    문제: 2진수 뒤집기
*/
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n, sum = 0;
    vector<int> bin;
    cin >> n;
    
    // 입력받은 10진수를 2진수로 변경
    while(n) {
        bin.push_back(n%2);
        n /= 2;
    }
    
    int size = bin.size() - 1;
    
    // vector에 들어간 이진수는 이미 뒤집혀있으므로 reverse 안해줘도 된다 !!
    // 2진수를 10진수로 변경
    for(auto it : bin) 
        sum += it * pow(2, size--);
    
    cout << sum << '\n';
	return 0;
}
