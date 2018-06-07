#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <tuple>

using namespace std;

unsigned long long int n, m, cnt = 1;
int maze[101][101];
int visited[101][101];
queue< tuple<int, int, int> > que;

int bfs(int x, int y) {
	
	que.push(make_tuple(x, y, cnt));
	
	while(!que.empty()) {
		tuple<int, int, int> it = que.front();
		que.pop();
		x = get<0>(it);
		y = get<1>(it);
		cnt = get<2>(it);
     
		if(y == n && x == m) {
			return cnt;
		}

		visited[y][x] = 1;
		
		if((x<=m && y>0) && !visited[y][x+1] && maze[y][x+1] == 1) 
		    que.push(make_tuple(x+1, y, cnt + 1)); visited[y][x+1] = 1;
		
		if((x>0 && y>0) && !visited[y][x-1] &&  maze[y][x-1] == 1) 
            que.push(make_tuple(x-1, y, cnt + 1)); visited[y][x-1] = 1;
		
		if((x>0 && y<=n) && !visited[y+1][x] &&  maze[y+1][x] == 1) 
		    que.push(make_tuple(x, y+1, cnt + 1)); visited[y+1][x] = 1;
		if((x>0 && y>0) && !visited[y-1][x] && maze[y-1][x] == 1) 
		    que.push(make_tuple(x, y-1, cnt + 1)); visited[y-1][x] = 1;

	}	
}

int main() {
	scanf("%d %d", &n, &m);
    
    memset(visited, 0, sizeof(visited));
    
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=m; ++j) {
			scanf("%1d", &maze[i][j]);
		}
	}
	
	int result = bfs(1,1);
    printf("%d\n", result);
	return 0;
}