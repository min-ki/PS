#include <iostream>
#include <cstdio>
using namespace std;

int n, s, cnt;
int num[20];
int currentsum;

// BackTracking 
void dfs(int current) {
    
    if(current == n) return;
    if(currentsum + num[current] == s) cnt++;
    
    dfs(current+1);
    currentsum += num[current];
    
    dfs(current+1);
    currentsum -= num[current];
}

int main() {
    cin >> n >> s;
    
    for(int i=0; i<n; ++i) 
        cin >> num[i];
    
    dfs(0);
    cout << cnt << '\n';
    
	return 0;
}
