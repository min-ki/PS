#include <stdio.h>

int* SelectionSort(int A[], int length) {
	int i, j, temp;
	int min;
	for (i = 0; i <= length - 2; i++) {
		min = i;
		for (j = i + 1; j <= length - 1; j++) {
			if (A[j] < A[min]) {
				min = j;
			}
		}
		temp = A[i];
		A[i] = A[min];
		A[min] = temp;
	}
	return A;
}

int main(void) {

	int A[] = { 40,10,50,90,20,80,30,60 };
	int length = sizeof(A) / sizeof(int);

	SelectionSort(A, length);

	for (int i = 0; i < length; i++) {
		printf("%d ", A[i]);
	}

	printf("\n");
	return 0;
}