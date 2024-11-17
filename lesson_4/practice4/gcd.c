#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
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
    return 0;
}