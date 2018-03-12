#include <cstdio>
using namespace std;

int main(int argc, const char *argv[])
{

    int a, b;

    while (scanf("%d %d", &a, &b) == 2)
    {
        if (a == 0 && b == 0)
            return 0;
        else
            printf("%d\n", a + b);
    }

    return 0;
}