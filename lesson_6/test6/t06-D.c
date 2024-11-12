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
#define loop(i,l,r) for(int i = l; i <= r; i++)
double eps = 1e-9;
int a[101][101];
int ans[101][101];
int find_max(int x1, int x2, int y1, int y2)
{
    int max = a[y1][x1];
    loop(i, y1, y2)
    {
        loop(j, x1, x2)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int n, m, p, q;
    scanf("%d%d%d%d", &n, &m, &p, &q);
    loop(i, 1, n)
    {
        loop(j, 1, m)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int row = 1, col = 1;
    for(int i = 1; i <= n; i += p)
    {
        col = 1;  
        for(int j = 1; j <= m; j += q)
        {
            ans[row][col++] = find_max(j, j + q - 1, i, i + p - 1);
        }
        row ++;
    }
    loop(i, 1, n/p)
    {
        loop(j, 1, m/q)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}