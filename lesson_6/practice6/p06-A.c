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
char a[1001], b[1001];
int abs(int a)
{
    return (a > 0)? a : (0-a);
}
int main()
{
    scanf("%s%s", &a, &b);
    int n = strlen(a);
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += abs(a[i] - b[i]);
    }
    printf("%d", ans);
    return 0;
}