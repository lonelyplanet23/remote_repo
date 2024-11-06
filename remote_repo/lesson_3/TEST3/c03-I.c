#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
double eps = 1e-9;
ll n, ans, a, arr[5000001];
int main()
{
    scanf("%lld", &n);
    scanf("%lld", &ans);
    for(int i = 2; i <= n; i++)
    {
        scanf("%lld", &arr[i]);
        ans ^= arr[i];
    }
    if (n & 1) printf("%lld", ans);
    else
    {
        ll bit = ans & ~(ans - 1);  //! 找到最小的1位置在哪里，（-1）取反后最低位为1的后面均为0
        ll a = 0,b = 0;
        for(ll i = 1; i <= n; i++)
        {
            if(arr[i] & bit)
            {
                a ^= arr[i];  //!把数组中的数分为两类，一类那一位是1，一类那一位是0
            }
        }
        b = ans ^ a;
        printf("%lld %lld", b, a);
    }
    return 0;
}