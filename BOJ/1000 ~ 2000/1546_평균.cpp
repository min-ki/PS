#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n, max = 0;
	double subject[1001];
	double result, sum = 0;
	
	cin >> n;
	
	// 값 입력
	for(int i=0; i<n; ++i) 
		cin >> subject[i];
		
	// 최대값 찾기
	for(int i=0; i<n; ++i)
	{
		if(max < subject[i])
		{
			max = subject[i];
		}
	}
	
	// 점수 / M * 100
	for(int i=0; i<n; ++i)
		subject[i] = (subject[i] / max) * 100;

	// 점수의 합계
	for(int i=0; i<n; ++i)
		sum += subject[i];
	
	result = double(sum / n); // 평균
	
	// 정밀도 설정
	cout.precision(2);
	cout << fixed << result;
	
	return 0;
}