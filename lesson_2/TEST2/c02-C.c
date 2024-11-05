#include<stdio.h>
#define ll long long
int main()
{
    int n;
    ll x;
    scanf("%d%lld", &n, &x);
    ll f,sum = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &f);
        if(f + x <= 0)
        {
            continue;
        }
        else
        {
            sum ++;
            x += f;
        }
    }
    printf("%d %lld", sum, x);
    return 0;
}