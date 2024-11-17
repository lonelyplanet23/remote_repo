#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
double eps = 1e-9;
int a[510];
int main()
{
    int n, cnt = 2;
    scanf("%d", &n);
    a[1] = n;
    while(n != 1)
    {
        if(n & 1)
        {
            n = n * 3 + 1;
        }
        else
        {
            n >>= 1;
        }
        a[cnt++] = n;
    }
    printf("%d\n", cnt - 1);
    for(int i = 1; i < cnt; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}