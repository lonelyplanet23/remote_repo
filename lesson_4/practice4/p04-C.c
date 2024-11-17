#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
int contained_5(ll a)
{
    do
    {
        if(a % 10 == 5)
        {
            return 1;
        }
    }
    while(a /= 10);
    return 0;
}
int main()
{
    ll n, cnt = 0;
    scanf("%lld", &n);
    for(int i = 0; i + i <= n; i++)
    {
        int x = n - i;
        if((!contained_5(x)) && (!contained_5(i)))
        {
            if(i != x)
            {
                cnt += 2;
            }
            else if(i == x)
            {
                cnt ++;
            }
        }
    }
    printf("%lld", cnt);
    return 0;
}