#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 100001
#define Deint(x) printf(#x" = %d\n", x)
#define Dell(x) printf(#x" = %lld\n", x)
#define Delf(x) printf(#x" = %lf\n", x)
#define Deull(x) printf(#x" = %llu\n", x)
#define Destr(x) printf(#x" = %s\n", x)
#define Deint(x) printf(#x" = %d\n", x)
#define Dechar(x) printf(#x" = %c\n", x)
#define De printf("debug\n")
#define loop(l,r) for(int i = l; i <= r; i++)
double eps = 1e-9;
//! 本质算法模型：最长递减序列
int h[1001];
int dp[1001];
int max(int a, int b)
{
    return (a > b)? a : b;
}
int main()
{
    int T, n;

    scanf("%d", &T);
    for(int j = 0; j < T; j++)
    {
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &h[i]);
        }
        int ans = 0;
        dp[0] = 1;
        for(int t = 1; t < n; t++)
        {
            for(int i = 0; i < t; i++)
            {
                if(h[i] > h[t])
                {
                    dp[t] = max(dp[t], dp[i] + 1);
                }
            }
        }
        ans = dp[n-1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for(int t = 1; t < n; t++)
        {
            for(int i = 0; i < t; i++)
            {
                if(h[i] < h[t])
                {
                    dp[t] = max(dp[t], dp[i] + 1);
                }
            }
        }
        ans = max(dp[n-1], ans);
        printf("%d\n", ans);       
    }

    return 0;
}