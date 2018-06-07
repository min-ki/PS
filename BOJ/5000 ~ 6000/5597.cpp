#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

bool student[31];

int main() {
    
    vector<int> check;
    memset(student, false, sizeof(student));
    
    for(int i=1; i<=30; ++i) {
       int num;
       cin >> num;
       student[num] = true;
    }
    
    for(int i=1; i<=30; ++i) {
        if(student[i] == false) {
            check.push_back(i);
        }
    }
    
    sort(check.begin(), check.end());
    
    cout << check[0] << '\n';
    cout << check[1] << '\n';
    
	return 0;
}
