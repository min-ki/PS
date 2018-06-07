#include <iostream>
#include <cstring>
using namespace std;

int width, height;
int map[51][51];
bool visited[51][51];

// DFS 알고리즘 
int dfs(int y,int x) {
    
    // 움직이고자 하는 좌표를 미리 배열로 해두면 편한 트릭!
    int dy[4] = {  0, 0, -1, 1 };
    int dx[4] = { -1, 1,  0, 0 };
    int nx, ny;
    
    visited[y][x] = true;
    
    for(int i=0; i<4; ++i) {
        ny = y + dy[i];
        nx = x + dx[i];
        
        // 조건 : 배열의 범위를 벗어나지 않으며
        // map이 true이고 아직 방문하지 않았다면 
        // 방문하고 깊이우선탐색을 실시 
        
        if(ny >= 0 && ny < height && nx >= 0 && nx < width ) {
            if(map[ny][nx] && !visited[ny][nx]) {
                visited[ny][nx] = true;
                dfs(ny, nx);
            }
        } 
    }
    
    return 1;
}

// 각각의 컴포넌트들을 방문하는 DFS 함수 
int dfsAll() {
    
    int components = 0;
    
    for(int i=0; i< height; ++i) {
        for(int j = 0; j < width; ++j) {
            if(map[i][j] == 1 && !visited[i][j]) {
                components += dfs(i,j);  // DFS가 끝날때마다 component 1씩 증가      
            }
        }
    }
    return components;
}

int main() {
    int testcase;
    int k;
    
    cin >> testcase;
    
    while(testcase--) {
        cin >> width >> height >> k;
        
        // 배열을 초기화 하는 memset함수
        memset(map, 0, sizeof(map));
        memset(visited, false, sizeof(visited));
        
        for(int i=0; i< k; ++i) {
            int x, y;
            cin >> x >> y;
            map[y][x] = 1; 
        }
        cout << dfsAll() << '\n';
    }
    
    
	return 0;
}