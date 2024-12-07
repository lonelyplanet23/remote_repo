#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 100001
#define Deint(x) printf(#x" = %d\n", x)
#define Dell(x) printf(#x" = %lld\n", x)
#define Delf(x) printf(#x" = %lf\n", x)
#define Deull(x) printf(#x" = %llu\n", x)
#define Destr(x) printf(#x" = %s\n", x)
#define Deint(x) printf(#x" = %d\n", x)
#define Dechar(x) printf(#x" = %c\n", x)
#define De printf("debug\n")
#define loop(l,r) for(int i = l; i <= r; i++)
double eps = 1e-9;
int mysum(unsigned int a)
{
    int sum = 0;
    for(int i = 31; i >= 0; i--)
    {
        sum += ((a >> i) & 1);
    }
    return sum;
}
int main()
{
    unsigned int a, b;
    char op;
    while(~scanf("%u %c %u", &a, &op, &b))
    {
        if(op == '&')
        {
            printf("%u %d\n", a&b, mysum(a&b));
        }
        else if(op == '|')
        {
            printf("%u %d\n", a|b, mysum(a|b));
        }
        else if(op == '^')
        {
            printf("%u %d\n", a^b, mysum(a^b));
        }
    }
    return 0;
}