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
    int ans = 6 * (1 << n);
    for(int i = 0; i < (1 << n); i++)
    {
        int t = 1;
        for(int j = 0; j <= 5; j++)
        { 
            if((i >> j) & 1)
            {
                printf("在i = %d时：ans += %d * %d\n", i, p[j], t);
                ans += (p[j] * t);
                t++;
            }
        }    
    }
    printf("%d", ans);
    return 0;
}