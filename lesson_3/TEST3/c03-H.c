#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
double eps = 1e-9;
ll n, x, ans = -1;
ll gcd(ll x, ll y)
{
    if(y == 0) return x;
    else return gcd(y, x % y);
}
int main()
{
    scanf("%lld", &n);
    for(int i = 0; i < n; i++)
    {
        ans = -1;
        scanf("%lld", &x);
        for(ll i = 1; i < x; i++)
        {
            if(gcd(i, x) == (i ^ x))
            {
                ans = i;
                break;
            }
        }
        printf("%lld\n", ans);
    }

    return 0;
}