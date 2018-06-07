/*

    BFS 알고리즘
    2644번 촌수계산 문제
    
*/

#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>

using namespace std;

int n, m;
int dis[101];
bool visited[101];
vector<int> adj[101];

int bfs(int start, int end) {
    queue<int> que;
    
    visited[start] = true;
    que.push(start);
    dis[start] = 0;
    
    while(!que.empty()) {
        int here = que.front();
        que.pop();

        if(here == end) 
            return dis[here];
        
        for(int next : adj[here]) {
            if(!visited[next] && dis[next] == -1) {
            	dis[next] = dis[here] + 1;
                visited[next] = true;
                que.push(next);
            }
        }
    }
    return -1;
}

int main() {
    
    int start, end;
    
    scanf("%d", &n);
    scanf("%d %d", &start, &end);
    scanf("%d", &m);
    
    memset(dis, -1, sizeof(dis));
    memset(visited, false, sizeof(visited));
	    
    for(int i=1; i<= m; ++i) {
        int u,v;
        scanf("%d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    cout << bfs(start, end) << '\n';
    
	return 0;
}
