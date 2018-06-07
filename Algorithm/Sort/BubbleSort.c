#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int testcase[], int len) {
	int i, j, temp;

	for (i = 1; i <= len - 1; i++) {
		for (j = 1; j <= len - i; j++) {
			if (testcase[j - 1] > testcase[j]) {
				temp = testcase[j];
				testcase[j] = testcase[j - 1];
				testcase[j - 1] = temp;
			}
		}
	}
}

int main(void) {
	int testcase[] = { 40, 10, 50, 90, 20, 80, 30, 60 };
	int len = sizeof(testcase) / sizeof(int); // �迭�� ���� ���ϱ�

	BubbleSort(testcase, len); // �Լ�ȣ��

	for (int i = 0; i < len; i++) {
		printf("%d ", testcase[i]); // ���ĵ� �迭 ����
	}

	return 0;
}