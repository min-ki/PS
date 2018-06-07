#include <stdio.h>

int* InsertionSort(int A[], int length);

int main(void) {

	int A[] = { 40,10,50,90,20,80,30,60 };
	int length = sizeof(A) / sizeof(int);
	InsertionSort(A, length);
	for (int i = 0; i <= length - 1; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;
}

int* InsertionSort(int A[], int length) {
	for (int i = 1; i <= length - 1; i++) {
		int CurrentElement = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > CurrentElement) {
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = CurrentElement;
	}
	return A;
}