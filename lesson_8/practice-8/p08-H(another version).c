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

int h[1001];
int dp[1001];
int max(int a, int b)
{
    return (a > b) ? a : b;
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

        // 遍历方向1：从左到右
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < n; i++)
        {
            dp[i] = 1;
            for(int j = 0; j < i; j++)
            {
                if(h[i] < h[j])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ans = max(ans, dp[i]);
        }

        // 遍历方向2：从右到左
        memset(dp, 0, sizeof(dp));
        for(int i = n - 1; i >= 0; i--)
        {
            dp[i] = 1;
            for(int j = n - 1; j > i; j--)
            {
                if(h[i] < h[j])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ans = max(ans, dp[i]);
        }

        printf("%d\n", ans);
    }

    return 0;
}