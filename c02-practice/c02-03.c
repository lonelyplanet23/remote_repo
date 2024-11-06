#include<stdio.h>
#include<math.h>
#define ll long long
int main()
{
    ll x, y, z;
    ll ans = 0;
    scanf("%lld%lld%lld", &x, &y, &z);
    ans += (x*x + y*y + z*z);
    ll x1 = x, y1 = y, z1 = z;
    scanf("%lld%lld%lld", &x, &y, &z);
    while(!(x == 0 && y == 0 && z == 0))
    {   
        // printf("jump : %d", ((x - x1)*(x - x1) + (y - y1)*(y - y1) + (z - z1)*(z - z1)));  
        ans += ((x - x1)*(x - x1) + (y - y1)*(y - y1) + (z - z1)*(z - z1));
        x1 = x;
        y1 = y;
        z1 = z;
        scanf("%lld%lld%lld", &x, &y, &z);
    }
    printf("%lld", ans);
    return 0;
}