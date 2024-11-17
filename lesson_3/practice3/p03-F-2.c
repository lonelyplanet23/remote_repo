#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define ll long long 
double eps = 1e-9;
ll n;
ll a[10000],sum1 = 0, sum2 = 0, sum3 = 0, sum = 0;
ll dp[9000][9000];
int main()
{
    scanf("%lld", &n);
    for(ll i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (ll len = 2; len <= n; len++) {
        for (ll i = 1; i <= n - len + 1; i++) {
            ll j = i + len - 1;
            ll sum1 = 0, sum2 = 0, sum3 = 0;
            for (int k = i; k <= j; k++) {
                sum1 &= a[k];
                sum2 |= a[k];
                sum3 ^= a[k];
            }
            if(dp[i][j] < sum1 + sum2 + sum3) dp[i][j] = sum1 + sum2 + sum3;
        }
    }

    printf("%lld\n", dp[1][n]);

    // printf("按位与和：%d - %d\n",1,a1);
    // printf("按位或和：%d - %d\n",a1+1,a2);
    // printf("按位异或和：%d - %d\n",a2+1,n);
    // printf("%lld %lld", sum + sum1);
    return 0;
}