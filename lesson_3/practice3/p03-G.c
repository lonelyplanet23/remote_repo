#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
double eps = 1e-9;
int n, p[30];
int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    int x = (1 << (n))-1;
    int ans = 0;
    for(int i = 0; i <= 1 << n; i++)
    {
        int cost = 6;
        for(int j = 5; j >= 0; j--)
        {
            int t = 0;
            for(int k = j; k >= 0; k--)
            {
                t += ((i >> k) & 1);
            }
            cost +=(((i >> j) & 1) * p[j] * t);
        }
        ans += cost;    
    }
    printf("%d", ans);
    return 0;
}