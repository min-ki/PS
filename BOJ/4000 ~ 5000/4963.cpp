/*
    4963번 섬의 개수 문제
    DFS Algorithm
*/
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int w,h;
int map[51][51];
bool visited[51][51];

// 탐색 방향 : 상하좌우 대각선까지
int dx[8] = {  0, 0, -1, 1, -1, 1, -1,  1};
int dy[8] = { -1, 1,  0, 0, -1, 1,  1, -1};

// 깊이우선탐색
void dfs(int y, int x) {
    
    visited[y][x] = true;
    
    for(int i=0; i<8; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx >= 1 && ny >= 1 && nx <= w && ny <= h) {
            if(!visited[ny][nx] && map[ny][nx]) {
                visited[ny][nx] = true;
                dfs(ny, nx);
            }
        }
    }
}

int main() {
    
    int nodes = 0; // 섬의 갯수 
    
    while(scanf("%d %d",&w, &h) == 2) {
    
        if(w == 0 && h == 0) break;
        
        memset(map, -1, sizeof(map));
        memset(visited, false, sizeof(visited));
        
        for(int j=1; j<=h; ++j) {
            for(int i=1; i<=w; ++i) {
                int temp;
                cin >> temp;
                map[j][i] = temp;
            }
        }
        
        for(int j=1; j<=h; ++j) {
            for(int i=1; i<=w; ++i) {
                if(!visited[j][i] && map[j][i]) {
                    dfs(j,i);
                    nodes++;
                }                
            }
        }
        cout << nodes << '\n';
        nodes = 0;
    }
    
    return 0;
}