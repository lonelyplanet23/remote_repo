#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
double eps = 1e-9;
unsigned int a[100005];
int mark[100005];
int n,ans = 0;
int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%u", &a[i]);
        mark[i] = 1;
    }
    for(int i = 31; i >= 0; i--)
    {
        int cnt = 0;
        for(int j = 1; j <= n; j++)
        {
            if(mark[j] == 1 && (a[j] & (1 << i)))
            {
                cnt++;
            }
        }
        if(cnt > 1)
        {
            for(int j = 1; j <= n; j++)
            {
                if(mark[j] && !(a[j] & (1 << i)))
                {
                    mark[j] = 0;
                }
            }
            ans += (1 << i);
        }
    }
    printf("%d", ans);
    return 0;
}