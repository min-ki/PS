/* 
    정렬 알고리즘을 이용한 문제 해결
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    cout << arr[1];
    return 0;
}


/*
    if 조건문을 이용한 문제 해결
*/

#include <iostream>
using namespace std;
int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    if (arr[0] >= arr[1] && arr[0] >= arr[2])
    {
        if (arr[1] >= arr[2])
            cout << arr[1];
        else
            cout << arr[2];
    }
    else if (arr[1] >= arr[0] && arr[1] >= arr[2])
    {
        if (arr[0] >= arr[2])
            cout << arr[0];
        else
            cout << arr[2];
    }
    else if (arr[2] >= arr[0] && arr[2] >= arr[1])
    {
        if (arr[0] >= arr[1])
            cout << arr[0];
        else
            cout << arr[1];
    }
    return 0;
}