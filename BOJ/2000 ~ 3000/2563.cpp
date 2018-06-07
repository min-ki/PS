#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, count = 0, board[101][101];
    int paper_x = 10, paper_y = 10;
    
    cin >> n;

    memset(board, 0, sizeof(board));
    
    while(n--) {
        int x, y;
        cin >> x >> y;
        
        paper_x += x;
        paper_y += y;
        
        for(int i = x; i < paper_x; ++i) 
            for(int j = y; j < paper_y; ++j)
                board[j][i] = true;

        paper_x = paper_y = 10;
    }
    
   for(int i=1; i<=100; ++i)
        for(int j=1; j<=100; ++j) 
            if(board[j][i] == true) count++;
        
    cout << count << '\n';
	return 0;
}