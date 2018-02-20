#include <iostream>
#include <string>
using namespace std;
int main()
{
    int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    int x, y;
    int duration = 0;

    cin >> x >> y;

    duration += y;

    if (x == 1)
    {
        cout << days[(duration % 7)];
    }
    else
    {
        for (int i = 1; i < x; ++i)
            duration += months[i];
        cout << days[(duration % 7)];
    }
    return 0;
}
