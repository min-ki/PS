#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 123456789;

// Sort Compare 함수 값이 같을 때는 먼저 오는 사람이 앞으로 정렬되도록 정의
bool compare(const pair<int, int> &x, const pair<int, int> &y) {
    if(x.second == y.second) {
        if(x.first < y.first) 
            return true;
    } else if(x.second < y.second) {
        return true;
    }
    return false;
}

int main() {
    int n, m, sum = 0, dis[101][101];
    vector<pair<int, int>> minimum;
    
    cin >> n >> m;
    
    for(int i=1; i<=n; ++i) 
        for(int j=1; j<=n; ++j) 
            dis[i][j] = i == j ? 0 : INF;
    
    // m개의 간선만큼 입력을 받는다.
    for(int i=1; i<=m; ++i) {
        int u,v;
        cin >> u >> v;
        dis[u][v] = dis[v][u] = 1;
    }
    
    // 플로이드 워셜 알고리즘
    for(int k=1; k<=n; ++k) {
        for(int i=1; i<=n; ++i) {
            for(int j=1; j<=n; ++j) {
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
            }
        }
    }
    
    
    // 케빈베이컨 수는 dis[i]들의 합이므로 더해서 minimum 배열에 삽입 
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=n; ++j) {
            sum += dis[i][j];
        }
        minimum.push_back(make_pair(i, sum));
        sum = 0;
    }
    
    sort(minimum.begin(), minimum.end(), compare);

    cout << minimum[0].first << "\n";
	return 0;
}
