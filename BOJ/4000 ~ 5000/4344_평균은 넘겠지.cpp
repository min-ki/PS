#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
	int testcase, n, sum = 0, student = 0;
	float average;
	vector<int> scores;
	cin >> testcase;
	
	while(testcase--) 
	{
		cin >> n;
		
		for(int i=0; i<n; ++i)
		{
			int temp;
			cin >> temp;
			scores.push_back(temp);
		}
		
		for(auto it=scores.begin(); it != scores.end(); ++it)
			sum += *it;
		
		average = sum / n;
		
		for(auto it=scores.begin(); it != scores.end(); ++it)
			if(*it > average) 
				student++;
				
		cout << fixed;
		cout << setprecision(3) << float(student*100) / float(n) << '%' << '\n';
		
		sum = 0;
		student = 0;
		scores.clear();

	}
	
	return 0;
}