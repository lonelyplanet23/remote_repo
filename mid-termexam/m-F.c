#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
#define ll long long
#define N 100001
#define Deint(x) printf(#x"= %d\n", x)
#define Dell(x) printf(#x"= %lld\n", x)
#define Delf(x) printf(#x"= %lf\n", x)
#define Deull(x) printf(#x"= %llu\n", x)
#define Destr(x) printf(#x"= %s\n", x)
#define Deint(x) printf(#x"= %d\n", x)
#define Dechar(x) printf(#x"= %c\n", x)
#define De printf("debug\n")
#define loop(l,r) for(ll i = l; i <= r; i++)
double eps = 1e-9;
ll t, m, cd = 0LL, sum = 0LL;
int main()
{
    ll n;
    ll c, k;
    scanf("%lld%lld%lld", &n, &c, &k);
    loop(1, n)
    {
        scanf("%lld%lld", &t, &m);
        if(t > cd)
        {
            sum += m;
            if(m >= k)
            {
                cd = t + c;
            }
        }
    }
    printf("%lld", sum);
    return 0;
}