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
int ev[4] = {15,12,8,4};
int light[500001][2];
int data[500001];
int max(int a, int b)
{
    return (a > b)? a : b;
}
int min(int a, int b)
{
    return (a > b)? b : a;
}
int abs(int x)
{
    return (x > 0)? x : (0-x);
}
int main()
{
    int t;
    scanf("%d", &t);
    int n, k;
    for(int j = 1; j <= t; j++)//!O(n^2)
    {
        scanf("%d%d", &n, &k);
        memset(data, 0, sizeof(data));
        loop(1, k)
        {
            scanf("%d%d", &light[i][0], &light[i][1]);
            light[i][1] = ev[light[i][1]];
            for(int r = max(1,light[i][0] - light[i][1]); r <= light[i][0]; r++)
            {
                //!核心代码
                data[r] = max(data[r], light[i][1] - (light[i][0] - r));
            }
            for(int r = light[i][0] + 1; r <= min(n, light[i][0] + light[i][1] - 1); r++)
            {
                data[r] = max(data[r], light[i][1] - (r - light[i][0]));
            }
        }
        int ans = 0;
        loop(1, n)
        {
            //printf("%d ", data[i]);
            if(data[i] <= 7)
            {
                ans++;
            }
        }
        //printf("\n");
        printf("%d\n", ans);
        memset(light, 0, sizeof(light));
    }
    return 0;
}