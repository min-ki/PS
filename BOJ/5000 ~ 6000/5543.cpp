#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int price;
	int menu[5];
	
	for(int i=0; i<5; ++i){
			cin >> price;
			menu[i] = price;
    }
	cout << (*min_element(menu,menu+3) + *min_element(menu+3,menu+5)) - 50 << endl;
	
	return 0;
}