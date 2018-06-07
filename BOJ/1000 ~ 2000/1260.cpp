// DFS와 BFS 알고리즘 문제

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int map[1001][1001], visited[1001];
int n,m,v;
int v1, v2;
queue<int> que;

void dfs(int v) {
	cout << v << ' ';
	visited[v] = 1;
	for(int i=1; i<=n; i++) {
		if(map[v][i] == 1 && !visited[i]) {
			dfs(i);
		}
	}
}

void bfs(int v) {
	visited[v] = 1;
	que.push(v);
	while(!que.empty()) {
		v = que.front();
		que.pop();
		cout << v << ' ';
		for(int i=1; i<=n; i++) {
			if(map[v][i] == 1 && !visited[i]) {
				visited[i] = 1;
				que.push(i);
			}
		}
	}
}

int main() {
	cin >> n >> m >> v;
	while(m--) {
		cin >> v1 >> v2;
		map[v1][v2] = 1;
		map[v2][v1] = 1;
	}
	
	dfs(v);
	memset(visited, 0, sizeof(visited));
	cout << '\n';
	bfs(v);
	return 0;
}