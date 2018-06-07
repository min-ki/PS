#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    string s;
    char cmd;
    int n;
    
    cin >> s;
    
    list<char> editor(s.begin(), s.end());
    
    cin >> n;
    
    auto cursor = editor.end(); 
    
    while(n--) {
        cin >> cmd;
        if(cmd == 'L') {
            if(cursor != editor.begin()) {
                cursor--;
            }
        } else if(cmd == 'D') {
            if (cursor != editor.end()) {
                cursor++;
            }
        } else if(cmd == 'B') {
            if(cursor != editor.begin()) {
                auto temp = cursor;
                --cursor;
                editor.erase(cursor);
                cursor = temp;
            }
        } else if(cmd == 'P') {
            char word;
            cin >> word;
            editor.insert(cursor, word);
        }
    }
    
    for(auto it = editor.begin(); it != editor.end(); ++it) {
        cout << *it;
    }
    
	return 0;
}
