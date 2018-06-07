#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int n, t, total_score = 0;
    float gpa;
    cin >> t;
    
    while(t--) {
        cin >> n;
        while(n--) {
            int score;
            float average;
            cin >> score >> average;
            total_score += score;
            gpa += float(score) * average;
        }
        cout << total_score << " ";
        cout << setprecision(1) << fixed << gpa / float(total_score) << '\n';
        total_score = 0;
        gpa = 0;
    }
	return 0;
}
