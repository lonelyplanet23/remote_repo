#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
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
ll my_pow(ll x){
    ll ans = 1;
    for(ll i = 1; i <= x; i++)
    {
        ans *= 3;
    }
    return ans;
}
ll a[25];
int main()
{
    ll x;
    while(~scanf("%lld", &x))
    {
        ll n = (ll)(log((double)x) / log(3.0));
        memset(a, 0, sizeof(a));
        printf("%lld =", x);
        for(int i = n; i >= 0; i--)
        {
            for(int j = 2; j >= 1; j--)
            {
                ll entry = j * my_pow(i);
                if(entry <= x)
                {
                    a[i] = j;
                    x -= entry;
                    break;
                }
            }
        }
        for(ll i = 0; i < n; i++)
        {
            if(a[i] == 1)
            {
                printf(" 3^%lld +", i);
            }
            else if(a[i] == 2)
            {
                printf(" 2*3^%lld +", i);
            }
        }
        if(a[n] == 1)
        {
            printf(" 3^%lld", n);
        }
        else if(a[n] == 2)
        {
            printf(" 2*3^%lld", n);
        }
        printf("\n");
    }
    return 0;
}