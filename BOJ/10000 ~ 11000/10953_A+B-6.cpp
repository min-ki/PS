#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[])
{

    int testcase;
    string input;

    cin >> testcase;

    while (testcase--)
    {
        cin >> input;

        cout << int(input[0] - '0') + int(input[2] - '0') << '\n';
    }

    return 0;
}
