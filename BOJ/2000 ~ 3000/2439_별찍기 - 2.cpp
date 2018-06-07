#include <cstdio>

int main() {
	int n, k;
	char star = '*';
	scanf("%d", &n);
	
	for(int i=1; i<=n; ++i) {
		for(int j=n-i; j>=1; --j) 
			printf(" ");
		for(int k=i; k>=1; --k)
			printf("%c", star);
		printf("\n");
	}
	
	return 0;
}