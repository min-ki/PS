#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int count = 0;
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); ++i)
    {
        if (i % 10 == 0 && i != 0) // i가 0일때는 띄어쓰기 안되도록 처리
            cout << '\n';
        cout << str[i];
    }
    return 0;
}