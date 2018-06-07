#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int score[11];
    int score_sum[11];
    int diff_score[11];
    vector<int> min_number;
    
    for(int i=1; i<=10; ++i) 
        cin >> score[i];
    
    for(int i=1; i<=10; ++i) {
        int sum = 0;
        
        for(int j=1; j<=i; ++j) 
            sum += score[j];
            
        score_sum[i] = sum;
        diff_score[i] = abs(score_sum[i] - 100);
    }
    
    int min = 123456789;
    
    for(int i=1; i<=10; ++i) 
        if(min > diff_score[i])
            min = diff_score[i];
    
    
    for(int i=1; i<=10; ++i) 
        if(min == diff_score[i]) 
            min_number.push_back(i);

    
    int max_number = 0;
    
    if(min_number.size() == 1) cout << score_sum[min_number[0]] << '\n';
    else {
        for(auto it = min_number.begin(); it != min_number.end(); ++it) 
            if(max_number < score_sum[*it])
                max_number = score_sum[*it];
        cout << max_number << '\n';
    }
    
	return 0;
}
