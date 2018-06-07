#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int n; // width, height; 

bool map[25][25];
bool visited[25][25];
vector<int> nodes;

int dy[4] = {0, 0, 1, -1};
int dx[4] = {-1, 1, 0, 0};

int dfs(int y, int x) {
    int nodes = 1;
    
    visited[y][x] = true;
    
    for(int i=0; i<4; ++i) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if(ny >=0 && ny < n && nx >= 0 && nx < n) {
            if(map[ny][nx] && !visited[ny][nx]) {
                visited[ny][nx] = true;
                nodes += dfs(ny, nx);
            }
        }
    }
  
    return nodes;
}


int dfsAll() {
    int components = 0;
    
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            if(map[i][j] && !visited[i][j]) {
                components++;
                nodes.push_back(dfs(i,j));
            }
        }
    }
    return components;
}

int main() {
    cin >> n;
    
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            scanf("%1d", &map[i][j]);
        }
    }
    
    cout << dfsAll() << '\n';
    
    sort(nodes.begin(), nodes.end());
    for(auto node : nodes) 
        cout << node << '\n';
    
    return 0;
}