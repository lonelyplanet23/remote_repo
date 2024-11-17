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
int a[101][101], b[101][101], c[101][101];
int main()
{
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= p; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= p; j++)
        {
            for(int k = 1; k <= m; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }  
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= p; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}