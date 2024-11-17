#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
#define ll long long
#define N 100001
#define Deint(x) printf(#x"= %d\n", x)
#define Dell(x) printf(#x"= %lld\n", x)
#define Delf(x) printf(#x"= %lf\n", x)
#define Deull(x) printf(#x"= %llu\n", x)
#define Destr(x) printf(#x"= %s\n", x)
#define Deint(x) printf(#x"= %d\n", x)
#define Dechar(x) printf(#x"= %c\n", x)
#define De printf("debug\n")
double eps = 1e-9;
int a[10], b[10];
ll min = 999999999, max = 0;
ll cnt = 0;
void dfs(int depth, int n)
{
    if(depth == n+1)
    {
        ll ans = 0;
        for(int i = 1; i <= n-1; i++)
        {
            ans += a[i];
            ans *= 10;
        }
        ans += a[n];
        //printf("%lld\n",ans);
        if(ans % 17LL == 0LL)
        {
            cnt++;
            if(ans < min) min = ans;
            if(ans > max) max = ans;
        }

    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            if(b[i] == 0)
            {
                a[depth] = i;
                b[i] = 1;
                dfs(depth+1,n);
                b[i] = 0;
            }
        }
    }
    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    dfs(1, n);
    printf("%lld\n%lld\n%lld", cnt, min, max);
    return 0;
}