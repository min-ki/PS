#include <stdio.h>

int* ShellSort(int A[], int length) {
	int gap[] = { 5,3,1 };
	int i, j, k, currentElement;
	for (i = 0; i < sizeof(gap) / sizeof(int); i++) {
		for (j = gap[i]; j <= length - 1; j++) {
			currentElement = A[j];
			k = j;
			while (k >= i && A[k - i] > currentElement) {
				A[k] = A[k - i];
				k = k - i;
			}
			A[k] = currentElement;
		}
	}
	return A;
}

int main(void) {

	int A[] = { 30,60,90,10,40,80,40,20,10,60,50,30,40,90,80 };
	int a_length = sizeof(A) / sizeof(int);

	ShellSort(A, a_length);
	for (int i = 0; i < a_length; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;
}