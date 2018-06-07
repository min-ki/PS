#include <iostream>
#include <vector>
using namespace std;

bool visited[300];
vector<int> adj[300];

void DFS(int v) {
    
    visited[v] = true; 
    
    cout << "current vertex: " << v << '\n';
    
    // 다음에 방문할 정점을 꺼내고 아직 방문하지 않았다면 방문한다.
    for(auto next : adj[v]) {
        if (!visited[next])
            DFS(next);
    }
}

int main() {
    int n; // 정점의 개수
    cin >> n;
    
    // 그래프 생성
    while(n--) {
        int u,v;
        cin >> u >> v;
        
        // 무향 그래프이므로 양방향 연결
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    // DFS 알고리즘 시작
    // 매개변수는 시작하고자하는 정점
    DFS(1); 
    
    return 0;
}