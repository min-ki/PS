#include <cstdio>

int main() {
	int n;
	char star = '*';
	scanf("%d", &n);
	
	for(int i=0; i<n; ++i) {
		for(int j=0; j<=i; ++j) {
			printf("%c", star);
		}
		printf("\n");
	}		
	return 0;
}