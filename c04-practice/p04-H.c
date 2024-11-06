#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
ll n;
ll a[500001];
ll next[500001];
int main()
{
    scanf("%lld", &n);
    for(ll i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        next[i] = 500001;
    }
    ll min = 1;
    for(ll i = 1; i <= n; i++)
    {
        for(ll j = i+1; j <= n; j++)
        {
            if(a[j] == a[i])
            {
                next[i] = j;
                break;
            }
        }
    }
    
    return 0;
}