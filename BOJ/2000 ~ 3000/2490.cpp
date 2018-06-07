#include <iostream>
using namespace std;

int main(void) {
		int Yut[3][4];
		int temp = 0;

		for(int i=0; i<3; i++)
			for(int j=0; j<4; j++)
				cin >> Yut[i][j];

	
		for(int i=0; i<3; i++) {
			temp = 0;
			
			for(int j=0; j<4; j++)	
					 temp += Yut[i][j];
			
			if (temp == 0) cout << "D" << endl;
			if (temp == 1) cout << "C" << endl;
			if (temp == 2) cout << "B" << endl;
			if (temp == 3) cout << "A" << endl;
			if (temp == 4) cout << "E" << endl;
		}

		return 0;
}