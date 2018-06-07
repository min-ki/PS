#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int room[2][7];
    int n,k, room_count = 0;
    
    cin >> n >> k;
    
    memset(room, 0, sizeof(room));
    
    for(int i=1; i<=n; ++i) {
        int s,y;
        cin >> s >> y;
        room[s][y]++;
    }
    
    for(int i=0; i<2; ++i) {
        for(int j=1; j<7; ++j) {
            if(room[i][j] == 0)
                continue;
            else {
                room_count++;
                while(room[i][j] > k) {
                    room[i][j] -= k;
                    room_count++;
                }
            }
        }
    }
    
    cout << room_count << '\n';
	return 0;
}
