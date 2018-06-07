// Binary Search를 이용한 풀이방법 
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	int temp;
	vector<int> card1;
	vector<int> card2;
	scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		scanf("%d", &temp);
		card1.push_back(temp);
	}

	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &temp);
		card2.push_back(temp);
	}

	sort(card1.begin(), card1.end());

	for (vector<int>::iterator it = card2.begin(); it != card2.end(); ++it) {
		if (binary_search(card1.begin(), card1.end(), *it))
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}

	return 0;
}