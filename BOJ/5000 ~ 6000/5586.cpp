#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int IOI_count = 0, JOI_count = 0;
    
    cin >> str;
    
    for(int i=0; i<str.length()-2; ++i) {
        if(str[i] == 'I' && str[i+1] == 'O' && str[i+2] == 'I')
            IOI_count++; 
        if(str[i] == 'J' && str[i+1] == 'O' && str[i+2] == 'I')
            JOI_count++;
    }
    
    
    cout << JOI_count << "\n";
    cout << IOI_count << "\n";
    
	return 0;
}
