/*
    7562번 나이트의 이동
    BFS 알고리즘 
*/

#include <iostream>
#include <cstring>
#include <queue>
#include <utility>
using namespace std;

// 나이트의 이동방향
const int dx[8] = { 2, 1,  2,  1, -2, -1, -2, -1 };
const int dy[8] = { 1, 2, -1, -2,  1,  2, -1, -2 };

int start_x, start_y, end_x, end_y;
int size, n;
int visited[300][300];
queue<pair<int,int>> que;

// 모든 곳을 다 탐색해 본다.
void move(int y, int x) {
    int level = 0;
    int nx, ny;
    visited[y][x] = 1;
    que.push(make_pair(y,x));

    while(!que.empty()) {
        auto it = que.front();
        que.pop();
        
        for(int i=0; i<8; ++i) {
            nx = it.second + dx[i];
            ny = it.first  + dy[i];
             
            if(nx >= 0 && ny >= 0 && nx < size && ny < size) {
                if(!visited[ny][nx]) {
                    visited[ny][nx] = visited[it.first][it.second] + 1;
                    que.push(make_pair(ny, nx));
                }
            }
        }
    }
    // 도착지점을 체크 
    cout << visited[end_y][end_x] - 1 << '\n';
}

int main() {
    
    cin >> n;
    
    for(int i=0; i<n; ++i) {
        memset(visited, 0, sizeof(visited));
        cin >> size;
        cin >> start_x >> start_y;
        cin >> end_x >> end_y;
        move(start_y, start_x);
    }
    
	return 0;
}
