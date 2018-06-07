#include <iostream>
using namespace std;

int main() {
    int information[2], math[2], science[2], english[2];
    int sum[2];
    
    for(int i=0; i<2; ++i) {
        cin >> information[i] >> math[i] >> science[i] >> english[i];
        sum[i] = information[i] + math[i] + science[i] + english[i];   
    }
    
    if(sum[0] == sum[1]) 
        cout << sum[0] << '\n';
    else if(sum[0] > sum[1])
        cout << sum[0] << '\n';
    else
        cout << sum[1] << '\n';
        
    return 0;
    
}