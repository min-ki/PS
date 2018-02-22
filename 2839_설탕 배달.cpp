#include <iostream>
using namespace std;

int delivery_sugar(int n)
{
    int item;

    for (int y = 0; y <= 1700; ++y)
    {
        for (int x = 0; x <= 1000; ++x)
        {
            if (5 * x + 3 * y == n)
            {
                item = x + y;
                return item;
            }
        }
    }

    return -1;
}

int main()
{
    int n, item;
    cin >> n;

    item = delivery_sugar(n);

    cout << item;

    return 0;
}