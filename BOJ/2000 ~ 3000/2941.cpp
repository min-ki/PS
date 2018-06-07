#include<cstdio>

char s[101], p[][4] = { "=c","-c","=zd","-d","jl","jn","=s","=z" };

int c, i;
int main() {
    scanf("%s", s);
    for (i = 0; s[i]; i++) {
        for (int j = 0; j < 8; j++) {
            int k = 0;
            for (; k <= i&&s[i - k] == p[j][k]; k++);
            c += !p[j][k];
        }
    }
    printf("%d", i - c);
    return 0;
}