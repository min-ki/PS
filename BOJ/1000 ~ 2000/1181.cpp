// 문제: 단어 정렬 
// 

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// sort 함수에 문자열 비교 함수를 정의해 해결
bool compare_str(const string& s1, const string &s2) {
    
	if(s1.length() < s2.length()) // 1. 길이가 짧은 순
		return true;
	
	if(s1.length() == s2.length()) { // 2. 길이가 같다면 
		if(s1 < s2) 
			return true;
	}
	return false;
}

int main() {
	int t;
	string s;
	vector<string> words;
	cin >> t;
	
	while(t--) {
		cin >> s;
		words.push_back(s);
	}
	
	sort(words.begin(), words.end(), compare_str); // 정렬
	auto it = unique(words.begin(), words.end()); // 같은 단어가 있는경우 하나만 출력하기위해 unique 함수 사용
	words.resize(distance(words.begin(), it)); // unique 함수를 사용하면 삭제를 하는 것은 아니기 때문에 사이즈 재조정 
	
	for(auto it = words.begin(); it != words.end(); ++it) {
		cout << *it << '\n';
	}
	return 0;
}