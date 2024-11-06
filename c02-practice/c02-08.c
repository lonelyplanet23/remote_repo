#include<stdio.h>
#include<math.h>
#define ll long long
ll obstcle[1048579];
ll ans = 0;
int main()
{
    ll a, b, n;
    scanf("%lld", &n);
    for (ll i = 0; i < n; i++)
    {
        scanf("%lld%lld", &a, &b);
        for(ll j = a+1; j <= b; j++)
        {
            if(obstcle[j] == 0) obstcle[j] = 1;
        }
    }
    for (ll i = 0; i <= 1048576; i++)
    {
        if(obstcle[i] == 1) ans++;
    }
    printf("%lld", ans);
    return 0;
}