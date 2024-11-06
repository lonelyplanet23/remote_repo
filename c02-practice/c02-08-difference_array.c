#include<stdio.h>
#include<math.h>
#define ll long long
#define MAXN 1048577
ll t[MAXN];
int main()
{
    ll n, a, b, ans = 0;
    scanf("%lld",&n);
    for(ll i = 1; i <= n; i++)
    {
        scanf("%lld%lld", &a, &b);
        t[a]++; 
        t[b]--; 
    }
    for(ll i = 0; i <= MAXN; i++)
    {
        t[i] += t[i-1];
        if(t[i] > 0)
        {
            ans++;
        }
    }
    printf("%lld", ans);
    return 0;
}