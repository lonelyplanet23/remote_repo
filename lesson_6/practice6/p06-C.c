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
void my_pow(ll x, ll map[]){
    ll ans = 1;
    map[0] = ans;
    for(ll i = 1; i <= x; i++)
    {
        ans *= 3;
        map[i] = ans;
    }
    return ;
}
ll my_log(ll map[], ll x)
{
    for(ll i = 0; i <= 22; i++)
    {
        if(map[i] <= x && map[i+1] > x)
        {
            return i;
        }
    }
}
ll a[25];
ll map[25];
int main()
{
    ll x;
    my_pow(22, map);
    while(~scanf("%lld", &x))
    {
        ll n = my_log(map, x);
        ll xx = x;
        memset(a, 0, sizeof(a));
        printf("%lld =", x);
        for(int i = n; i >= 0; i--)
        {
            for(int j = 1; j <= 2; j++)
            {
                    if(x >= map[i])
                    {
                        x -= map[i];
                        a[i]++;
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