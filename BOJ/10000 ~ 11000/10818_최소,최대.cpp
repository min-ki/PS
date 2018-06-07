#include <cstdio>
using namespace std;

int main(int argc, const char *argv[])
{

    int n = 0;
    int max = -1000001;
    int min = 1000001;

    scanf("%d", &n);

    while (n--)
    {
        int temp;
        scanf("%d", &temp);
        if (temp > max)
            max = temp;
        if (temp < min)
            min = temp;
    }

    printf("%d %d", min, max);

    return 0;
}