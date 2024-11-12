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
int a[1002], b[1002];
ll rdot(int a[], int b[], int n)
{
    ll ans = 0;
    int l = 0, r = n - 1;
    for( ; l < n, r >= 0; l++, r--)
    {
        ans += a[l] * b[r];
    }
    return ans;
}
int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        loop(0, n-1)
        {
            scanf("%d", &a[i]);
        }
        loop(0, n-1)
        {
            scanf("%d", &b[i]);
        }    
        printf("%lld\n", rdot(a, b, n));    
    }
    
    return 0;
}