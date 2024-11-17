#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
unsigned int d(unsigned int x, unsigned int y)
{
    int dif = 0;
    for(int i = 31; i >= 0; i--)
    {
        if((x & (1 << i)) ^ (y & (1 << i)))
        {
            dif++;
        }
    }
    return dif;
}
unsigned int max(unsigned int x, unsigned int y)
{
    return (x >= y)? x : y;
}
int main()
{
    unsigned int x1, x2, x3, x4, x5;
    while(~scanf("%u%u%u%u%u", &x1, &x2, &x3, &x4, &x5))
    {
         printf("%u\n", max(d(x1,x2),d(x1,x3)) + max(d(x2,x4),d(x3,x4)) + max(d(x3,x5),d(x4,x5)));

    }
    return 0;
}