// 1032번: 명령프롬프트 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> search;
vector<char> pattern;
int main() {
	int n;
	int size;
	cin >> n;
	
	while(n--) {
		string temp;
		cin >> temp;
		search.push_back(temp);
		size = temp.size();
	}
	
	vector<char> pattern(size, '!'); // 입력되지 않는 값으로 미리 초기화
	
	for(auto it = search.begin(); it != search.end(); ++it) {
		string filename = *it;
		for(int i=0; i<size; ++i) {
			if(pattern[i] == '!')
				pattern[i] = filename[i];
			if(pattern[i] == filename[i])
				continue;
			else
				pattern[i] = '?';
		}
	}
	
	for(auto it = pattern.begin(); it != pattern.end(); ++it) 
		cout << *it;
	
	return 0;
}