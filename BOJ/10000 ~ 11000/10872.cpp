#include <cstdio>

// 팩토리얼을 구하는 재귀함수 
int factorial(int n) {
	if(n<2) return 1;
	else return n * factorial(n-1);
}

int main() {
	int t;
	scanf("%d", &t);
	printf("%d", factorial(t));
	return 0;
}