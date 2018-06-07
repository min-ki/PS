#include<cstdio>

int n,dp[1001][3];
int min(int x, int y){ 
    return x < y ? x : y; 
}

int main(){
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int a[3];
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        for (int j = 0; j < 3; j++)
            dp[i][j] = min(dp[i-1][(j + 1) % 3], dp[i-1][(j + 2) % 3]) + a[j];
    }
    printf("%d", min(min(dp[n][0], dp[n][1]), dp[n][2]));
    return 0;
}