#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{

    int testcase;
    int a, b;

    cin >> testcase;

    for (int i = 1; i <= testcase; ++i)
    {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << '\n';
    }

    return 0;
}