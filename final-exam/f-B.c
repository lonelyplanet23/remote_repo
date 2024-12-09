#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
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
int a[1002];
int main()
{
    int n, x;
    scanf("%d%d", &n, &x);
    //顺序查找
    loop(1, n)
    {
        scanf("%d", &a[i]);
    }
    if(x == a[1])
    {
        printf("%d", a[n]);
        return 0;
    }
    for(int i = 2; i <= n; i++)
    {
        if(x == a[i])
        {
            printf("%d", a[i-1]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}