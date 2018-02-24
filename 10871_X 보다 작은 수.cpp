#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    int n, x;

    cin >> n >> x;
    arr.reserve(n);

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
        if (*it < x)
            cout << *it << " ";

    return 0;
}