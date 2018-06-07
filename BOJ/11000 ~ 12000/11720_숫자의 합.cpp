#include <cstdio>
#include <string>
using namespace std;

int main(int argc, const char *argv[])
{
    int n, sum = 0;
    char str[101];

    scanf("%d", &n);
    scanf("%s", str);

    for (int i = 0; i < n; ++i)
        sum += int(str[i] - '0');

    printf("%d", sum);

    return 0;
}
