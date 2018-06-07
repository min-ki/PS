/* 
    * Greedy Algorithm 
    * 1931번 회의실 배정
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 끝나는 시간이 같다면 먼저 시작하는 것을 배정
// 끝나는 시간이 빠른 것 부터 가져온다.
bool compare(const pair<int, int> m1, const pair<int, int> m2) {
    if(m1.second == m2.second) 
        return m1.first < m2.first;
    return m1.second < m2.second;
}
int main() {
    int n, previous = -1;
    int cnt = 0;
    
    vector<pair<int, int>> meeting;
    
    cin >> n;
    
    for(int i=0; i<n; ++i) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        meeting.push_back(make_pair(temp1, temp2));
    }
    
    sort(meeting.begin(), meeting.end(), compare);
    
    // 
    for(int i=0; i<n; ++i) {
        if(meeting[i].first >= previous) {
            previous = meeting[i].second;
            cnt++;
        }
    }
    
    cout << cnt << '\n';
}