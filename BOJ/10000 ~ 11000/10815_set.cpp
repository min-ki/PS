// set자료구조를 이용한 풀이방법
#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	
	set<int> s;
	
	// 삽입하는데 n개 있으니 O(NlogN)
	for(int i=0; i<n; ++i){
		int x;
		scanf("%d", &x);
		s.insert(x);
	}
	
	
	int m;
	scanf("%d", &m);
	
	// 찾는데 M개가 있으니 O(MlogN)
	for(int i=0; i<m; i++) {
		int x;
		scanf("%d", &x);
		printf("%d ", s.count(x));
	}
	printf("\n");
	
	return 0;
}


// 문제를 푸는데 NlogN + MlogN의 시간이 걸린다.