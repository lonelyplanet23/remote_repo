#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long 
double eps = 1e-9;
ll n;
ll a[10000],sum1 = 0, sum2 = 0, sum3 = 0, sum = 0;
ll a1 = 0, a2 = 0;
int main()
{
    scanf("%lld", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for(int i = 1; i <= n-2; i++)
    {
        for(int j = i + 1; j <= n-1; j++)
        {
            ll sum1 = a[1], sum2 = a[i+1], sum3 = a[j+1];
            for (int k = 2; k <= i; k++) {
                sum1 &= a[k];
            }

            for (int k = i+2; k <= j; k++) {
                sum2 |= a[k];
            }

            for (int k = j+2; k <= n; k++) {
                sum3 ^= a[k];
            }
            if(sum < (sum1+sum2+sum3))
            {
                a1 = i;
                a2 = j;
                sum = sum1 + sum2 + sum3;
            }
        }
    }
    // printf("按位与和：%d - %d\n",1,a1);
    // printf("按位或和：%d - %d\n",a1+1,a2);
    // printf("按位异或和：%d - %d\n",a2+1,n);
    printf("%d", sum);
    return 0;
}