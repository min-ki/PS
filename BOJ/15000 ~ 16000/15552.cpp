/*
    15552번: 빠른 A+B 
*/

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t, value1, value2;
    cin >> t;
    while (t--)
    {
        cin >> value1 >> value2;
        cout << value1 + value2 << '\n';
    }
    return 0;
}