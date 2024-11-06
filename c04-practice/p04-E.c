#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
#define N 500001
int a[N];
double eps = 1e-9;
int main()
{
    int i = 1, n, last, now, cnt = 1;
    scanf("%d", &n);
    scanf("%d", &last);
    a[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        scanf("%d", &now);
        if(last == now)
        {
            cnt ++;
            a[i] = a[i-1];
        }
        else if(last > now)
        {
            a[i] = a[i-1] + cnt;
            cnt = 1;
        }
        last = now;
    }

    for( ; (a[i] <= 3 && i <= n); i++)
    {
        if(a[i] == 1)
        {
            printf("Gold Award\n");
        }
        else if(a[i] == 2)
        {
            printf("Silver Award\n");
        }
        else if(a[i] == 3)
        {
            printf("Bronze Award\n");
        }
    }
    for( ;i <= n; i++)
    {
        if(a[i] <= n * 0.1)
        {
            printf("First Class Award\n");
        }
        else if(a[i] > n * 0.1 && a[i] <= n * 0.3)
        {
            printf("Second Class Award\n");
        }
        else if(a[i] > n * 0.3 && a[i] <= n * 0.6)
        {
            printf("Third Class Award\n");
        }
        else if(a[i] > n * 0.6 && a[i] <= n * 0.9)
        {
            printf("Excellence Award\n");
        }
        else
        {
            printf("No Award\n");
        }
    }
    return 0;
}