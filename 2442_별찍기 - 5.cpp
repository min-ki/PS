#include <cstdio>
using namespace std;

int main(int argc, const char *argv[])
{
    int n;
    char star = '*';

    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
            printf(" ");
        for (int k = 1; k <= 2 * i - 1; ++k)
            printf("%c", star);

        printf("\n");
    }

    return 0;
}