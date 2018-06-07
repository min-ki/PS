#include <iostream>
using namespace std;

int main(void) {
		int count = 0;

		char Board[8][8];

		int solider[8][8] = {
				{0,1,0,1,0,1,0,1},
				{1,0,1,0,1,0,1,0},
				{0,1,0,1,0,1,0,1},
				{1,0,1,0,1,0,1,0},
				{0,1,0,1,0,1,0,1},
				{1,0,1,0,1,0,1,0},
				{0,1,0,1,0,1,0,1},
				{1,0,1,0,1,0,1,0}
		};

		for(int i=0; i<8; i++) {
			for(int j=0; j<8; j++)
					cin >> Board[i][j];
		}

		for(int i=0; i<8; i++) {
				for(int j=0; j<8; j++) {
						if(solider[i][j] == 0 && Board[i][j] == 'F')
								count += 1;
				}
		}

		cout << count << endl;
		return 0;

}