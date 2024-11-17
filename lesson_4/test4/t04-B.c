#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll unsigned long long
#define N 100001
double eps = 1e-9;
ll a;
int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++)
    {
        scanf("%llu", &a);
        for(int i = m - 1; i >= 0; i--)
        {
            if((1LL << i) & a)
            {
                printf("#");
            }
            else 
            {
                printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}