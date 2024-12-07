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
int p[102];
int used[102];
int abs(int x)
{
    return (x > 0)? x : (0-x);
}
ll SSTF(int n, int m)
{
    ll sum = 0;
    int cnt = n;
    while(cnt)
    {
        int index = 0;
        int min = 10009;
        for(int i = 1; i <= n; i++)
        {
            if(min > abs(m - p[i]) && used[i] == 0)
            {
                index = i;
                min = abs(m - p[i]);
            }
        }
        sum += (ll)min;
        printf("%d ", p[index]);
        used[index] = 1;
        //Deint(index);
        //Deint(used[index]);
        m = p[index];
        cnt--;
    }
    printf("\n");
    return sum;
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("%lld", SSTF(n, m));
    return 0;
}