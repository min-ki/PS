#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int cache[246913];

void find_sosu(int n) {
	for(int i=2; i*i <= n; ++i){
		if(cache[i]){
			for(int j=i*i; j<=n; j+=i){
				cache[j] = false;
			}
		}
	}	
}

int main() {
	int t, count=0;
	while(scanf("%d", &t) == 1) {
		memset(cache, 1, sizeof(cache));
		find_sosu(2*t);
		if(t==0)
			break;
		else {
			for(int i=t+1; i<= 2*t; ++i){
				if(i==1)
					continue;
				else if(cache[i]) {
					++count;
				}
			}
			printf("%d\n", count);
			count = 0;
		}
	}
	return 0;
}