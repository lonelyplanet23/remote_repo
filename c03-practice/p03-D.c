#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
double eps = 1e-9;
int a[10002];
int main()
{
    int n, b, max = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &b);
        if(b > max) max = b;
        a[b]++;
    }
    for(int i = 1; i <= max; i++)
    {
        if(a[i] != 0)
        {
            printf("%d : %d\n", i, a[i]);
        }
    }
    return 0;
}