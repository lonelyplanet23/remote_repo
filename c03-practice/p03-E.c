#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
double eps = 1e-9;
ll n, k, cnt = 0;
ll a[70];
int main()
{
    scanf("%lld", &n);
     for(ll i = 0; i <= 61; i++)
    {
        if((1LL << i) & n)
        {
            a[i]++;
            cnt ++;
        }
    }
    printf("%lld\n", cnt);
    for(ll i = 0; i <= 61; i++)
    {
        if(a[i] > 0)
        {
            printf("%lld ", i+1);
        }
    }
    return 0;
}