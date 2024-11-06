#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
double eps = 1e-9;
int main()
{
    int T;
    unsigned int n;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%u", &n);
        int ans = 0;
        for(int i = 31; i >= 0; i--)
        {
            if((n >> i) & 1)
            {
                ans += (i);
                break;
            }
        }
        for(int i = 31; i >= 0; i--)
        {
            if((n >> i) & 1)
            {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}