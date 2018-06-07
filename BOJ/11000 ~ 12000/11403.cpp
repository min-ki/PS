/*
    11403번 경로찾기
    Floyd-warshall Algorithm
    # 다시 풀어보기
    # 출처 kks227 블로그
*/

#include <iostream>
#include <algorithm>
using namespace std;
const int INF = 123456789;
 
int main(){
    int n, distance[100][100];
    cin >> n;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cin >> distance[i][j];
            if(distance[i][j] == 0) distance[i][j] = INF;
        }
    }
 
    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);
    
    for(int i=0; i<n; i++) { 
        for(int j=0; j<n; j++) {
            if(distance[i][j] == INF)
                cout << 0 << " ";
            else
                cout << 1 << " ";
        }
        cout << '\n';
    }
}