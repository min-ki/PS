#include <iostream>
#include <cstdio>
#include <algorithm> // min

#define INF 123456789

using namespace std;


int main() {
    int n, m, dist[100][100];
    
    scanf("%d %d", &n, &m); // n은 도시의 개수, m은 버스의 개수
    
    // i와 j가 같을때는 0으로 처리 
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            dist[i][j] = i == j ? 0 : INF;
        }
    }
    
    // a 버스는 시작 도시,  b 버스는 도착 도시, c 버스는 한번 탈때의 비용이다.
    for(int i=0; i<m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        dist[a-1][b-1] = min(dist[a-1][b-1], c); // 똑같은 쌍이 들어온다면 작은 것으로 갱신한다
    }
    
    // 플로이드 알고리즘 
    // 경유지 / 시작점 / 끝점 순으로 루프를 돌린다.
    // 시간복잡도는 O(N^3)
    for(int k=0; k<n; ++k) {
        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }
    
    // dist[i][j]에는 i -> j 로 가는 최단거리가 들어가 있다.
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            cout << dist[i][j] << " ";
        }
        cout << '\n';
    }
}