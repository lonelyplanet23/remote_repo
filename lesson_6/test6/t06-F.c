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
ll a[500002];
ll binFind(ll b[], ll key, ll low, ll high) {//找到最小下标
    ll mid;
    while( low < high ){//还有要查找的元素
        mid = (low + high)/2;//中间位置
        if (key <= b[mid])//前半部分查找
            high = mid;//! 把这个值保留在区间内
        else //后半部分查找
            low = mid+1;
    }
    return high;
}
int main()
{
    ll n, m;
    scanf("%lld%lld", &n, &m);
    for(int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    loop(1, m)
    {
        ll h;
        scanf("%lld", &h);
        if(h > a[n]) printf("-1\n");
        else{
            ll ans = binFind(a, h, 1, n);

            printf("%lld\n", ans);
        }
    }
    return 0;
}