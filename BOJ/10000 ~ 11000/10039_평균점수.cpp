#include <cstdio>

int main() {
	int students[5], sum = 0;
	
	for(int i=0; i<5; ++i) {
		scanf("%d", &students[i]);
		if(students[i] < 40) students[i] = 40;
		sum += students[i];
	}
	
	int average = sum / 5;
	printf("%d", average);
	
	return 0;
}
