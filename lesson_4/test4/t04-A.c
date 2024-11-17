#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
ll gcd(ll a, ll b)
{
    if(b == 0)
    {
        return a;
    }
    else return gcd(b, a % b);
}
ll lcm (ll a, ll b)
{
    return (a / gcd(a,b)) * b;
}
int main()
{
    int n;
    ll a,b;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lld%lld", &a, &b);
        printf("%lld\n", lcm(a,b));
    }
    return 0;
}