/*
    10989 수 정렬하기 3
    Counting Sort Algorithm
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int count[10001];
    int n;
    cin >> n;
    
    memset(count, 0, sizeof(count));
    
    while(n--) {
        int num;
        cin >> num;
        count[num]++;
    }
    
    for(int i=1; i<=10000; ++i) {
        if(count[i]) {
            for(int j=1; j<= count[i]; ++j) 
                cout << i << '\n';
        }
    }
	return 0;
}
