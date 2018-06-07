#include <cstdio>
using namespace std;

int main() {
	int n,k;
	char star = '*';
	scanf("%d", &n);
	
	k = n;
	
	for(int i=1; i<=n; ++i){
		
		for(int j=1; j<=i-1; ++j)
			printf(" ");
		
		for(int f=k; f>=1; f--){
			printf("%c", star);
		}
		printf("\n");
		k--;
	}
	return 0;
}