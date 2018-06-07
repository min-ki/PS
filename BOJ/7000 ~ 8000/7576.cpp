#include <iostream>
#include <queue>
using namespace std;

queue<pair<int, int>> que;
bool visited[1001][1001];
int map[1001][1001];
int dx[4] = { -1, 1, 0, 0};
int dy[4] = { 0, 0, -1, 1};
int M,N;

bool check_map() {
  for(int y=0; y<N; ++y) 
        for(int x=0; x<M; ++x) 
            if(map[y][x] == 0)
                return false;
    return true;
}

int bfs() {
    int level = 0;
    while(!que.empty()) {
        int qSize = que.size();
        for(int i=0; i<qSize; ++i) {
            auto it = que.front();
            que.pop();
            visited[it.first][it.second] = true;
            map[it.first][it.second] = 1;
            for(int i=0; i<4; ++i) {
                int nx = it.second + dx[i];
                int ny = it.first + dy[i];
                if(nx>=0 && nx < M && ny>=0 && ny < N){
                    if(map[ny][nx] == 0 && !visited[ny][nx]) {
                        que.push(make_pair(ny, nx));
                        visited[ny][nx] = true;
                        map[ny][nx] = 1;
                    }
                }
            }
        }
        level++;
    }
    return level;
}
int main() {
    int min;
    cin >> M >> N;
    
    for(int y=0; y<N; ++y) {
        for(int x=0; x<M; ++x) {
            cin >> map[y][x];
            if(map[y][x] == 1)
                que.push(make_pair(y, x));
        }
    }
    
    min = bfs();
    
    if(que.size() == (M * N)) cout << 0 << '\n';
    else if(check_map()) cout << min - 1 << '\n';
    else cout << -1 << '\n';        
    
	return 0;
}