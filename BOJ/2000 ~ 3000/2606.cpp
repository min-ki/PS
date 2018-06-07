#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 123456789;

int main() {
    int virus = 0;
    int computer[101][101];
    int n,m;
    
    cin >> n;
    cin >> m;
    
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=n; ++j) {
           computer[i][j] = INF;
           computer[j][i] = INF;
        }
    }
    
    for(int i=1; i<=m; ++i) {
        int u,v;
        cin >> u >> v;
        computer[u][v] = 1;
        computer[v][u] = 1;
    }
    
    for(int k=1; k<=n; ++k) {
        for(int i=1; i<=n; ++i) {
            for(int j=1; j<=n; ++j) {
                if(computer[i][k] + computer[k][j] == 2) {
                    computer[i][j] = 1;
                }
            }
        }
    }
    
    for(int i=2; i<=n; ++i) 
        if(computer[1][i] != INF) 
            virus++;
    
    cout << virus << '\n';
    
	return 0;
}
