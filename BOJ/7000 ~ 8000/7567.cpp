/*
    7567번 그릇
    문자열 처리
    출처 : Olympiad > 한국정보올림피아드시․도지역본선 > 지역본선 2013 > 초등부 1번
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    int sum = 10;
    cin >> s;
    
    for(int i=0; i<s.length() - 1; ++i) {
        if(s[i] != s[i+1]) 
            sum += 10;
        else
            sum += 5;
    }
    cout << sum << '\n';
    
	return 0;
}
