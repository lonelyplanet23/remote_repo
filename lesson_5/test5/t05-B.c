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
int popcount(unsigned x)
{
    int sum = 0;
    for(int i = 31; i >= 0; i--)
    {
        if(x & (1 << i))
        {
            sum++;
        }
    }
    return sum;
}
ll f(int x)
{
    return ((ll)popcount(x) % 10000LL + ((x%10000LL) * x) % 10000LL) % 10000LL;
}
int main()
{
    unsigned input;
    while(~scanf("%u", &input))
    {
        printf("%lld\n", f(f(f(input))));
    }
    return 0;
}