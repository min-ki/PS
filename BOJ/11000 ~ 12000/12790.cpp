#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n, hp, mp, power, defence;
	int temp1, temp2, temp3, temp4;
	
	cin >> n;
	
	while(n--) {

		scanf("%d %d %d %d", &hp, &mp, &power, &defence);
		scanf("%d %d %d %d", &temp1, &temp2, &temp3, &temp4);
		
		hp += temp1; 
        mp += temp2;
		power += temp3; 
        defence += temp4;
	    
	    if(hp < 1) hp = 1; // hp가 1보다 작다면 1
	    if(mp < 1) mp = 1; // mp가 1보다 작다면 1
	    if(power < 0) power = 0; // 공격력이 0보다 작다면 0으로 간주
	    
        // 전투력 공식
		int total = (1 * hp) + (5 * mp) + (2 * power) + (2 * defence);
		cout << total << '\n';
	}
	
	return 0;
}