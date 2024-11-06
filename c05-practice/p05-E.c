#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
int C(int m, int n)
{
    if(n == 0 || n == m) return 1;
    return C(m-1, n) + C(m-1, n-1);
}
int maxx(int a, int b)
{
    return (a >= b)? a : b;
}
int main()
{
    int p, q, t;
    scanf("%d%d%d", &p, &q, &t);
    while(t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        if(n > (p+q) || p < m)
        {
            printf("0\n");
        }
        else
        {
            int ans = 0;
            for(int i = m; i <= n && i <= p; i++)
            {
                if(n - i <= q) ans += (C(p, i) * C(q, n-i));
            }
            printf("%d\n", ans);
        }
    }
    return 0;
}