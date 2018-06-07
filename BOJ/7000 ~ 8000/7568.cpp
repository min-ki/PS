#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, int>> people;
    vector<int> count;
    int weight, height;
    int n, idx = 0;
    cin >> n;
    
    while(n--) {
        cin >> weight >> height;
        people.push_back(make_pair(weight, height));
    }
    
    for(int i=0; i<people.size(); ++i) {
        for(int j=0; j<people.size(); ++j) {
            if(people[i].first < people[j].first && people[i].second < people[j].second) {
                idx++;
            }
        }
        count.push_back(idx+1);
        idx = 0;
    }
    
    for(auto it = count.begin(); it != count.end(); ++it) 
        cout << *it << " ";
	return 0;
}
