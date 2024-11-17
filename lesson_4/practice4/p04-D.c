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
    int n, last, now, cnt = 1;
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
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for( ; a[i] <= 3; i++)
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
    i = 1;
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