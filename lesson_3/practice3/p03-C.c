#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
double eps = 1e-9;
int main()
{
    ll a, b;
    while(scanf("%lld%lld", &a, &b) != EOF)//! 
    {
        ll sum = 0;
        for(ll i = 0; i <= 64; i++)
        {
            if((a & (1LL << i)) && !((b & (1LL << i))))
            {
                sum |= (1LL << i);
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}